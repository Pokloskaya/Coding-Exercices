// https://codeforces.com/contest/1760/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
	cin>>t; 
  vector<int> vec; //test cases -> vec.push_back(number);
  
	while(t--)
	{

    int l;
    cin >> l;
    string a;
    int lol;
    char ch;
    cin >> a;

    int resultado = 0;
    int resultadoFinal;
    
    for(int i=0; i < l; i++){
      ch=a[i];
      lol = ch;

      if(lol > resultado){
        resultado = lol;
      }
    }

    resultadoFinal = resultado - 96;
    vec.push_back(resultadoFinal);

    
    
  }
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }
}