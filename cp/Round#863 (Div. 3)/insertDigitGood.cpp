//https://codeforces.com/contest/1811/problem/A
#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int len, a=1;
        string d, og, ans;
        cin >> len >> d >> og;
        for (int i=0; i<len; i++) {
            if ((stoi(d) > int(og[i] - '0')) && a) {
                ans += d;
                a = 0;
            }
            ans += og[i];
        }
        if (ans.size()==len) ans += d;
        cout << ans << endl;
    }
    return 0;
}


// int main() {
//     int testCases; cin >> testCases;
//     while(testCases--){
//         int len; cin >> len;
//         string addNumber; cin >> addNumber;
//         string ogNumber; cin >> ogNumber;
//         string equisde;
//         int flag = len; //quizas tiene que ser len+1
//         int flagFirst = 0;
//         vector<string> result;

//         for(int i = 0; i < len; i++){
//             if(ogNumber[i] <= addNumber[0]){
//                 flag = i;
//             }
//             equisde = ogNumber[i];
//             result.push_back(equisde);
//         }

//         result.insert(result.begin() + flag + addNumber);        
        
//         for (int i = 0; i < len+1; i++){
//             cout<<result[i];
//         }
//     }
// }