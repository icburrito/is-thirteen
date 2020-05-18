/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    var num = 0;
    var s = 1;
    var f = 0;
    var y = x.toString();
    var l = y.length; 

    if (x > -2147483647 && x < 2147483647){
        if (y[0] == '-') {
            s = -1
            f = 1
        }
        for (let i = l-1; i >= f; i--) {
            num = num *10 + Number(y[i]);
        }
        if (s*num > -2147483647 && s*num < 2147483647){
            return s*num;
        }
    }

    return 0;
};

/* Given a 32-bit signed integer, reverse digits of an integer.
Example 1:
Input: 123
Output: 321

Example 2:
Input: -123
Output: -321

Example 3:
Input: 120
Output: 21

Note:
Assume we are dealing with an environment which could only store integers 
within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose 
of this problem, assume that your function returns 0 when the reversed 
integer overflows.
 */