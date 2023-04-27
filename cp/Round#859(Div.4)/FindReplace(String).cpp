//https://codeforces.com/contest/1807/problem/C
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len; cin>>len;
        int flag = 0;
        string s; cin >> s;
        vector<int> binary(len, 0);

        //check if numbers are contigous 
        for(int i=0; i < len-1; i++){
            if(s[i] == s[i+1]){
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            for(int i=0; i < len; i++){

                for(int j=0; j < len; j++){

                    if(i > 0){
                        if(s[i] == s[j]){
                            //cout << "coincidencia" << endl;
                            if(binary[i-1] == 0){
                                binary[j] = 1;
                            }
                            if(binary[i-1] == 1){
                                binary[j] = 0;
                            }
                        }
                    }
                }
            }
        }

        // for(int i=0; i < len; i++){
        //     cout << " " << binary[i];
        // }

        int coincidences = 0;
        for(int i=0; i < len-1; i++){
            if(binary[i] == binary[i+1]){
                //cout << "COINCIDENCIA" << endl;
                coincidences++;
            }
        }

        if(coincidences == 0 && flag == 0) cout << "YES" << endl;
        else if (flag == 0) cout << "NO" << endl;
            
    }
}
