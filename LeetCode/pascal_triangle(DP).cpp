//https://leetcode.com/problems/pascals-triangle/solutions/3176431/best-c-solution-ever-dp-tabulation-bottom-up-one-stop-solution/
/*

    Time Complexity : O(N^2). Where N is the numRows. Here total number of iterations are : N*(N+1)/2 which creates the time complexity.

    Space Complexity : O(1). Constant space. Because we are creating 2D vector output as per the demand of
    program.

    Solved using Dynamic Programming Approach(Tabulation: Bottom Up).

*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output(numRows);
        for(int i=0; i<numRows; i++){
            output[i].resize(i+1, 1);
            for(int j=1; j<i; j++){
                output[i][j] = output[i-1][j-1] + output[i-1][j];
            }
        }
        return output;
    }
};

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    Solution solution;
    vector<vector<int>> result = solution.generate(numRows);

    // Printing the result
    for (const auto& row : result) {
        for (const auto& num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
