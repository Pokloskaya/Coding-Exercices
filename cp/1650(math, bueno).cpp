//9 15 10

#include <bits/stdc++.h>
using namespace std;
 
int resultadoFinal(int a, int l, int r){
  int resultado;
  resultado = (r/a) + (r % a);
  
  int rm;
  rm = r % a;
 
  int resultadoFormula = r - (rm + 1);
  
  int resultado2 = (resultadoFormula/a) + (resultadoFormula % a);
  
  if(resultado2 > resultado && resultadoFormula >= l){
    return resultado2;
  }else{
    return resultado;
  }  
}
 
int main(){
    int tests;
    cin >> tests;
    vector<int> result;
    
    for(int i = 0; i<tests; i++){
      int a, l, r, resultado;
      cin >> l, cin >> r, cin >> a;
      resultado = resultadoFinal(a, l, r);
      result.push_back(resultado);
    }
 
   for (int i = 0; i < result.size(); i++){
          cout<<result[i]<<endl;
    }
}