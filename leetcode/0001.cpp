class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i=0; i < nums.size(); i++){
            for (int j=i+1; j < nums.size(); j++){
                if (nums[i]+nums[j] == target){
                    result.push_back(i); 
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ht;
        vector<int> result;
        for(int i=0; i< nums.size(); i++){
            if(ht.find(target-nums[i]) != ht.end()) {
                result.push_back(i);
                result.push_back(ht.find(target-nums[i])->second);
            }else ht[nums[i]]=i;
        }
        return result;
    }
};


/* Given an array of integers, return indices of the two numbers such that 
they add up to a specific target.
You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

return [0, 1]. */

