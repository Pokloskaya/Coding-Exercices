// https://codeforces.com/contest/1791/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int testCase;
  cin>>testCase;
  
	while(testCase--)
	{
        int n; cin >> n;
        string s; cin >> s;
        int contadorX = 0; 
        int contadorY = 0; 
        int contadorResultados = 0;

        for(int i = 0; i < n; i++){
            switch (s[i]) {
                case 'L':
                  contadorX -= 1;
                  break;

                case 'R':
                  contadorX += 1;
                  break;

                case 'U':
                  contadorY += 1;
                  break;

                case 'D':
                  contadorY -= 1;
                  break;

            }
            //cout << contadorX << contadorY << endl;
            if((contadorX == 1) && (contadorY == 1)){
                contadorResultados += 1;
            }
        }

        if(contadorResultados > 0) cout << "YES" << endl;
        else cout << "NO" << endl;

    }    
    return 0;
}