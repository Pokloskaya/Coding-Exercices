#include <iostream>
using namespace std;

int binarySearch(int arr[], int x){
    int mid = sizeof(arr) / sizeof(arr[0]);
    while(true){
        if(arr[mid] > x) mid = mid -1;
        else if(arr[mid] < x) mid = mid +1; 
        else return mid;
    }
    return -1;
}

int binarySearch2(int arr[], int x, int n) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (high + low) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2,3,4,5,6,8};
    int x = 5;
    cout << binarySearch(arr, x) << endl;
}