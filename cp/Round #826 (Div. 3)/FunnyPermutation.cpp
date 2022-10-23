#include<iostream>
using namespace std;
int t,n;
int main()
{

    cin >> t; //3
              //3 1 2

    while(t--){
      cin >> n; 
      if(n == 3)
        cout <<-1;
      else
      {
      for(int i = 3; i <= n; i++)
        cout<<i<<" ";
        cout<<"2 1";
        //4 3 2 1
      }
      cout<<endl;
      
    }
}