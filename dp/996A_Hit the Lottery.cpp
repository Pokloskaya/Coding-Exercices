#include<bits/stdc++.h>
using namespace std;

bool canSum(int a[], int targetSum){

    int arrSize = *(&a + 1) - a;
  
    for(int i=0; i<arrSize; i++)
    {
      //cout << a[i];
      if(canSum(a{2,3}, targetSum) == true
        return true;
      //targetSum = targetSum - a[i];
    }
  
}


int main()
{
    int targetSum = 7;
    
    int a[]={2,3};

    canSum(a[], targetSum);
}
