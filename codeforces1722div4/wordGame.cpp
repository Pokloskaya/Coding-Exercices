
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{  

      vector<string> playerOne;
      vector<string> playerTwo;
      vector<string> playerThree;
  
      int n;
      int  i, j;
      int counterOne, counterTwo, counterThree = 0; 
      cin >> n;
      string s[3][n];
      
    //cout<<"\n2D Array Input:\n";
	  for(i=0;i<3;i++)
	  {
	  	for(j=0;j<n;j++)
	  	{
	  		//cout<<"\ns["<<i<<"]["<<j<<"]=  ";
	  		cin>>s[i][j];
		  }
	  } 
    	  
  
    for (int x=0; x<3; x++)
    {
      playerOne.push_back(s[0][x]);
    }
  
    for (int x=0; x<3; x++)
    {
      playerTwo.push_back(s[1][x]);
    
    }
    
    for (int x=0; x<3; x++)
    {
      playerThree.push_back(s[2][x]);
    }

    //usar unos IF para comparar un vector con los contenidos de       los otros
    // for (int i = 0; i < playerOne.size(); i++) { //imprimir array
    //   cout << playerTwo.at(i) << endl;
    // }
    for (int x=0; x<n; x++)
    {
      for(int i=0; i<n; i++){
        if(playerOne[x] == playerTwo[i]){
          cout << "el jugador 1 tiene una letra que el jugador 2 tambien---";
          counterOne = counterOne + 1;
        }
      }
    }
	  
	  cout<<"\nThe n-D Array is:\n";
      for(i=0;i<3;i++)
	  {
	  	for(j=0;j<n;j++)
	  	{
	  		cout<<"\t"<<s[i][j];
		}
		cout<<endl;
    cout<<counterOne;


  
	  } 
} 