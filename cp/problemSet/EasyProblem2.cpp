#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool printed = false;
int n;
vector<int> segundo(n);
string hard = "HARD";
string easy = "EASY";

int main(){
    cin>>n;
    vector<int> vec; 
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        vec.push_back(temp);
    }
    //recorrer vector
    for(int i=0; i<vec.size(); i++){
        if(vec[i] ==1){
            cout<<hard<<endl;
            printed = true;
            break;
        }        
    }
    if(!printed){
        cout<<easy<<endl;
    }
    return 0;
}