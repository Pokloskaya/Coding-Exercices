//https://codeforces.com/contest/1778/problem/0
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    vector<int> result;
    while(t--)
    {
        int n; cin>>n;
        int sum = 0;

        vector<int> v(n);
        for(int i= 0; i < n; i++){int x; cin >>  x; v[i] = x;} //fill array

        for(int i= 0; i < n; i++){

            if(i + 1 > n){
                break;
            }

            if(v[i] == -1 && v[i+1] == -1){
                v[i] = 1;
                v[i+1] = 1;
                break;
            }
        }

        if(n == 2){
            if(v[0] == 1 && v[1] == 1){
                v[0] = -1;  
                v[1] = -1;
            }
        }


        for(int i= 0; i < n; i++){sum += v[i];} //SUM THE VALUES
        //result.push_back(sum);
        cout << sum << endl;
    }
    // return 0;
    // for (int i = 0; i < result.size(); i++){
    //       cout<<result[i]<<endl;
    // }

}