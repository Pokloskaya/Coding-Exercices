//PROBLEM: Find the two numbers in an array that add up to a given target

#include <iostream>
#include <unordered_map>
#include <utility>
using namespace std;

struct Pair {
    int first;
    int second;
};

Pair twoNumbersSum(int arr[], int size, int target) {
    unordered_map<int, int> hashTable;
    for (int i = 0; i < size; i++) {
        if (hashTable.count(target - arr[i]) > 0) {
            Pair result;
            result.first = target - arr[i];
            result.second = arr[i];
            return result;
        } else {
            hashTable[arr[i]] = 1;
        }
    }
    Pair result;
    result.first = 0;
    result.second = 0;
    return result;
};

int main() {
    int arr[] = {2,3,4,5,6,8};
    int size = 6;
    int target = 10;
    Pair result = twoNumbersSum(arr, size, target);
    cout << result.first << " " << result.second << endl;
}