//Given two Strings, write a method to decide if one is a permutation of the other.


#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;
bool arePermutation(string str1,string str2)
{
    // Get lengths of both strings
    int n1 = str1.length();
    int n2 = str2.length();

    // If length of both strings is not same, then they
    // cannot be anagram
    if (n1 != n2)
      return false;

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    // Compare sorted strings
    for (int i = 0; i < n1;  i++)
       if (str1[i] != str2[i])
         return false;

    return true;
}

int main() {
// Test Method 1 - Using sort
    cout << "Type two strings to be checked" << endl;
    string str1;
    string str2;

    cin >> str1;
    cin >> str2;
  
    if(arePermutation(str1, str2))
      cout << str1 <<" and " << str2 << " are permutation of each other" << endl;
    else
      cout << str1 <<" and " << str2 << " are not permutation of each other" << endl;

  }