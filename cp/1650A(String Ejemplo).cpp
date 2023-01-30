#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s, c;
    int repeticiones; cin >> repeticiones;
    
    vector<string> result;
    string yes = "YES", no = "NO";
  
  for(int i = 0; i<repeticiones; i++){
      cin >> s >> c;
      int longitudS = s.size();
      int contador = 0;
      int prohibido = 0;
      //contar letras S
      for(int i = 0; i < longitudS; i++)
      {
        if(s[i] == c[0]){
          contador = contador + 1;
          //si esta en una posicion impar mayor a 3
          if(i % 2 != 0){
            prohibido = prohibido + 1;
          }
        }
      }

      //si es un digito
      if(longitudS == 1 && s != c){
        result.push_back(no);
        continue;
      }

      if(contador == prohibido){
        result.push_back(no);
        continue;
      }
      result.push_back(yes);

 }
 for (int i = 0; i < result.size(); i++){
        cout<<result[i]<<endl;
  }
}