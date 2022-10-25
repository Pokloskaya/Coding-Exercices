#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int tests, a, l, r, resultado, start;
    cin >> tests;
    vector<int> result;
    
    for(int i = 0; i<tests; i++){
      int momento = 0;
      cin >> l, cin >> r, cin >> a;

      //start = (l + r)/2;
      
      for(int i = l; i <= r; i++){ 
        resultado = i/a + i % a;
        // cout << resultado << endl;
        if(resultado > momento){
          momento = resultado;
        }
      }
      result.push_back(momento);
    }

   for (int i = 0; i < result.size(); i++){
          cout<<result[i]<<endl;
    }
}