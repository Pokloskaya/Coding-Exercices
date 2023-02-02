// https://codeforces.com/contest/1760/problem/A
#include <bits/stdc++.h>
using namespace std;
int t, n1, n2, n3, result;
int main()
{
  
	cin>>t; 
  vector<int> vec; //test cases -> vec.push_back(number);
  
	while(t--)
	{

    cin>>n1; cin>>n2; cin>>n3;

    //result n1
    if(n1 > n2 && n1 < n3){ // n3 > n1 > n2
      vec.push_back(n1);
    }else if(n1 > n3 && n1 < n2){
      vec.push_back(n1);
    }

    //result n2
    if(n2 > n1 && n2 < n3){
      vec.push_back(n2);
    }else if(n2 > n3 && n2 < n1){
      vec.push_back(n2);
    }

    //result n3
    if(n3 > n1 && n3 < n2){
      vec.push_back(n3);
    }else if(n3 > n2 && n3 < n1){
      vec.push_back(n1);
    }
    
  }

  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }
}