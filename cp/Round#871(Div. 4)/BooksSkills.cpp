//https://codeforces.com/contest/1829/problem/C
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()
//cout << "k2: " << k2 << endl;
//set<int> mySet; <------- conjuntos
//vector<int> myVector; <------- vectores
//cout << "debuggear: " << variable << endl;

int main(){
    int t; cin >> t;
    // vector<int> minutes;
    // vector<string> skills;
    while(t--){
        int nBooks; cin >> nBooks;
        int minutesIn; 
        string skillsIn; 

        int skillOne = 900000; 
        int skillTwo = 900000;
        int result;
        for (int i = 0; i < nBooks; i++)
        {
            cin >> minutesIn;
            cin >> skillsIn;

            if(skillsIn[0] == '1' && minutesIn < skillOne ){
                skillOne = minutesIn;
            }
            
            if(skillsIn[1] == '1' && minutesIn < skillTwo ){
                skillTwo = minutesIn;
            }

            if (skillsIn[0] == '1' && skillsIn[1] == '1')
            {
                result = minutesIn;
            }
            
        }

        int resultFinal = skillOne + skillTwo;

        if(skillOne == 900000 || skillTwo == 900000){
            cout << "-1" << endl;
        }else if(result < resultFinal){
            cout << result << endl;
        }else{
            cout << resultFinal << endl;
        }
    
        
    }
    
}