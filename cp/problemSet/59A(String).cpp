//https://codeforces.com/problemset/problem/59/A
#include <cstring>
#include <iostream>
using namespace std;
 
int main(){

    string s; cin >> s;
    lon = s.length();
    int lon;
    int upper = 0; 
    int lower = 0;
    
    for(int i = 0; i < lon; i++)
    {  
        if(isupper(s[i])){
          upper++;
        }else{
          lower++;
        }
    }

    //upper to lower
    if(upper <= lower){
      for(int i = 0; i < lon; i++){
        if(isupper(s[i])){
          s[i] = s[i] + 32;
        }
      }
      cout << s;
    }    
    
    //lower to upper
    if(upper > lower){
      char char_array[lon+1];

      for (int i = 0; i < lon; i++){
        char_array[i] = s[i];
      }
      for (int x=0; x<lon; x++){
        putchar(toupper(char_array[x]));
      }
      return 0;
    }
}