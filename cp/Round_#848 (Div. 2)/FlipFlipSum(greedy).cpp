//https://codeforces.com/contest/1778/problem/0
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int sum = 0;
        int negativeIndicator = 0;  //if there wasn't any negative pairs, the result should be subtracted -2 

        vector<int>v;

        //fill vector
        for(int i= 0; i < n; i++){
            int x; cin >>  x; v[i] = x;

            if(v[i] == -1){
                negativeIndicator++;
            }
        }

        //special case
        if(n == 2){
            if(v[0] == 1 && v[1] == 1){
                v[0] = -1;  
                v[1] = -1;
                sum = -2;
            }else if(v[0] == -1 && v[1] == -1){
                sum = 2;
            }
            cout << sum << endl;
            continue;
        }

        //check if there are two -1 together
        for(int i= 0; i < n; i++){
            if(i + 1 > n){ //Because we're compering with +1, so avoid overflow
                break;
            } 

            if(v[i] == -1 && v[i+1] == -1){
                v[i] = 1;
                v[i+1] = 1;
                break;
            }
        }

        //if there isn't an negative number, turn two numbers to -1
        if(negativeIndicator <= 0){
            v[0] = -1;
            v[2] = -1;
        }
        
        //SUM THE VALUES
        for(int i= 0; i < n; i++){
            sum += v[i];
        } 

        cout << sum << endl;
    }
}