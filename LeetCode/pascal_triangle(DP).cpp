//https://leetcode.com/problems/pascals-triangle/solutions/3176431/best-c-solution-ever-dp-tabulation-bottom-up-one-stop-solution/
/*

    Time Complexity : O(N^2). Where N is the numRows. Here total number of iterations are : N*(N+1)/2 which creates the time complexity.

    Space Complexity : O(1). Constant space. Because we are creating 2D vector output as per the demand of
    program.

    Solved using Dynamic Programming Approach(Tabulation: Bottom Up).

*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output(numRows);
        for(int i=0; i<numRows; i++){
            output[i].resize(i+1, 1); //This line resizes the inner vector at index i to have a size of i+1. It also initializes all the elements of the resized inner vector to the value 1.
            for(int j=1; j<i; j++){
                output[i][j] = output[i-1][j-1] + output[i-1][j];
            }
        }
        return output;
    }
};