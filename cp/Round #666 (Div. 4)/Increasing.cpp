// https://codeforces.com/contest/1742/problem/B

#include <bits/stdc++.h>
using namespace std;
int t, n1, n2, n3, n4;
int main()
{
  
	cin>>t; //test cases -> vec.push_back("YES");
  vector<string> vec;
  
  
	while(t--)
	{

    vector<int> vecint;
    cin>>n1;

    for(int i = 0; i < n1; i++){
      cin>>n2;
      vecint.push_back(n2);
    }

    int contador = 0;
    for(int i = 0; i < n1; i++){ //EMPIEZA ACA 
      
      for(int y = 0; y < n1; y++){
        if(vecint[i] == vecint[y] && i != y)
          //cout << vecint[y];
          contador = contador + 1;
      }
    }

    // cout << contador << endl;
    if(contador > 1)
      vec.push_back("NO");
    else
      vec.push_back("YES"); 
  }

  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }
}