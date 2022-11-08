

#include <bits/stdc++.h>
using namespace std;
int t, n1, n2, n3;
string n, m, igual, mayor, menor;
int main()
{
  
	cin>>t;
  vector<string> vec;
  
	while(t--)
	{
    cin>>n1;
    cin>>n2;
    cin>>n3;

    if(n1 + n2 == n3)
      vec.push_back("YES");
    else if( n1 + n3 == n2)
      vec.push_back("YES");
    else if(n3 + n2 == n1)
      vec.push_back("YES");
    else
      vec.push_back("NO");
    


    
  // 1 + 2 = 3
  // 1 + 3 = 2
  // 3 + 2 = 1
    
    
    
    
    
    
    
    
    
    
  }

  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }
}