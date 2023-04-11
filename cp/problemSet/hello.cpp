//https://codeforces.com/problemset/problem/58/A
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string s; cin >> s;
    string letter, result;
    //vector<int> sv;
    for(int i=0; i<s.length(); i++){
        letter = s[i];
        if( letter == "h" || letter == "e" || letter == "l" || letter == "o"){
            result += letter;
        }
    }
    //cout << "palabra filtrada: " << result << endl;
    int h, e, l, o;
    int Lcantidad = 0;
    int Hflag = 0; int Eflag = 0; int Lflag = 0; int Oflag = 0;
    for(int i=0; i<result.length(); i++){
        if(result[i] == 'h' && Hflag == 0){
            h = i;
            Hflag = 1;
        }else if(result[i] == 'e' && i > h && Eflag == 0){
            e = i;
            Eflag = 1;
        }else if(result[i] == 'l' && i > e && Lflag == 0){
            l = i;
            Lcantidad += 1;
            if(Lcantidad == 2) Lflag = 1;
        }else if(result[i] == 'o' && i > l && Oflag == 0){
            o = i;
            Oflag = 1;
        }
    }
    // cout << e << endl;
    int sumaFlags = Hflag + Eflag + Lflag + Oflag;
    if(h < e < l < o && Lcantidad == 2 && sumaFlags == 4){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}