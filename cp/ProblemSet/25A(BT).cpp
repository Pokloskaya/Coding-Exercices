// https://codeforces.com/problemset/problem/25/A
#include <iostream> 
#include <vector>
#include <string>
using namespace std;
 
int main() {
    vector<int> numbers;
    int n, number, result; cin >> n;
    
    int evenCounter = 0; 
    int unevenCounter = 0;
    
    for(int i = 0; i < n; i++){
        cin >> number;
        numbers.push_back(number);
        if(number % 2 == 0) evenCounter++;
        else unevenCounter++;  
    }
 
    for(int i = 0; i < n; i++){

        if(unevenCounter == 1){
            if(numbers[i] % 2 != 0){
            cout << i+1 << endl;
            break;                 
            } 
        }
            
        if(evenCounter == 1){
            if(numbers[i] % 2 == 0){
            cout << i+1 << endl;
            break;  
            }
        }
    }
}