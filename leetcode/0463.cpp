class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
                
        int n = grid.size();
        int m = grid[0].size();
        int perimeter = 0;
        
        for (int x = 0; x < n; x++){
            for (int y = 0; y < m; y++){
                if (grid[x][y] == 1){
                    if (x == 0)
                        perimeter = perimeter + 1;
                    if (x == n-1)
                        perimeter = perimeter + 1;
                    if (y == 0)
                        perimeter = perimeter + 1;
                    if (y == m-1)
                        perimeter = perimeter + 1;
                    if (x-1 >= 0 and grid[x-1][y] == 0)
                        perimeter = perimeter + 1;
                    if (x+1 < n and grid[x+1][y] == 0)
                        perimeter = perimeter + 1;
                    if (y-1 >= 0 and grid[x][y-1] == 0)
                        perimeter = perimeter + 1;
                    if (y+1 < m and grid[x][y+1] == 0)
                        perimeter = perimeter + 1;
                }
            }
        }      
        return perimeter;
    }
};

/* Island Perimeter: You are given a map in form of a two-dimensional integer grid where 1
represents land and 0 represents water. Grid cells are connected horizontally/vertically 
(not diagonally). The grid is completely surrounded by water, and there is exactly one island 
(i.e., one or more connected land cells).

The island doesn't have "lakes" (water inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

Example:

Input:
[[0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]]
Output: 16 */
