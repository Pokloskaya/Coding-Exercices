#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    int testCases; 
    cin >> testCases;
    while(testCases--){
        string a, b;
        cin >> a;
        cin >> b;

        if(a[a.size()-1] == 'M' || b[b.size()-1]=='M'){
            if(a[a.size()-1] == 'L'){
                cout << ">" << endl;
            }
            else if(b[b.size()-1] == 'L'){
                cout << "<" << endl;
            }
            else if(a[a.size()-1] == 'S'){
                cout << "<" << endl;
            }
            else if(b[b.size()-1] == 'S'){
                cout << ">" << endl;
            }
            else{
                cout << "=" << endl;
            }
        }
        else{
            if(a[a.size()-1] == 'S'){
                if(b[b.size()-1] == 'S'){
                    if(a.size() == b.size()){
                        cout << "=" << endl;
                    }
                    else if(a.size() > b.size()){
                        cout << "<" << endl;
                    }
                    else{
                        cout << ">" << endl;
                    }
                }
                else{
                    cout << "<" << endl;
                }
            }
            else{
                if(b[b.size()-1] == 'S'){
    
                }
                else{
                    if(a.size() == b.size()){
                        cout << "=" << endl;

                    }else if(a.size() > b.size()){
                        cout << ">" << endl;
                    }
                    else{
                        cout << "<" << endl;
                    }
                }

            }
        }
    }
    return 0;
}