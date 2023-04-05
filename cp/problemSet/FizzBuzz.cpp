#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0;
    while(i < 100){
        i++;
        string result = "";
        if(i % 3 == 0) result += "Fizz";
        if(i % 5 == 0) result += "Buzz";
        cout << result << endl;
    }
    return 0;
}

// Solution in python:

// for i in range(1,101):
//     output = ""
//     if i % 3 == 0:
//         output += "Fizz"
//     if i % 5 == 0:
//         output += "Buzz"
//     print(output or i)