//https://codeforces.com/contest/1807/problem/B
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        // vector<int> result;
        // result.push_back(nCandies);
        int bags, nCandies;
        int even = 0; 
        int uneven = 0;
        cin >> bags;

        for(int i = 0; i < bags; i++){
            cin >> nCandies;

            if(nCandies % 2 == 0){
                even += nCandies;
            }else{
                uneven += nCandies;
            }
        }

        if(even > uneven){
            cout << "YeS" << endl;
        }else{
            cout << "nO" << endl;
        }
    }
}