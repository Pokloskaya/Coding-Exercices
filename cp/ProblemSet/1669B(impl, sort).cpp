//https://codeforces.com/contest/1669/problem/B
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


int findElementAppearsThreeOrMore(const vector<int>& arr) {
    unordered_map<int, int> counts;
    for (int num : arr) {
        counts[num]++;
        if (counts[num] >= 3) {
            return num;
        }
    }

    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int len; cin >> len;
        vector<int> arr;
        int n; 
        for (int i = 0; i < len; i++)
        {
            cin >> n;
            arr.push_back(n);
        }

        int result = findElementAppearsThreeOrMore(arr);
        cout << result << endl;
    }
}

//BRUTE FORCE SOLUTION, IT EXCEEDES TIME LIMIT: 

// int main(){
//     int t; cin >> t;
//     while(t--){
//         int len; cin >> len;
//         vector<int> arr;
//         int n; 
//         for (int i = 0; i < len; i++)
//         {
//             cin >> n;
//             arr.push_back(n);
//         }

        
//         int result = 0;
//         for (int i = 0; i < len; i++)
//         {   
//             int contador = 0; 
//             if(result != 0){
//                 break;
//             }

//             for (int j = 0; j < len; j++)
//             {
//                 if(arr[i] == arr[j]){
//                     contador++;
//                     //cout << "contador: " << contador << endl;
//                 }

//                 if(contador >= 3){
//                     result = arr[i];
//                     break;
//                 }
//             }   
//         }
        
//         if(result != 0){
//             cout << result << endl;
//         }else{
//             cout << "-1" << endl;
//         }
    
//     }
// }