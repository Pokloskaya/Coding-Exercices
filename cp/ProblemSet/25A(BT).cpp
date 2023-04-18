// https://codeforces.com/problemset/problem/25/A
#include <iostream> 
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    vector<int> numbers;
    int n, number, result; cin >> n;
    
    int smallestNumber;
    for(int i = 0; i < n; i++){
        cin >> number;
        numbers.push_back(number);
        if(i == 0) smallestNumber = number;
        if(number < smallestNumber) smallestNumber = number;
    }
    
    for(int i = 0; i < n; i++){

        if(i <= n-2){
            if(numbers[i] == numbers[i+1] || numbers[i] == numbers[i+2]){
                cout << i+1 << endl;
                break;
            }
        }

        if(numbers[i] % smallestNumber != 0){
            cout << i+1 << endl;
            break;
        }

        
    }

}