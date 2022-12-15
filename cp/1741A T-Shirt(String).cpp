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

        if(a[a.size()-1] == 'M' || b[b.size()-1]=='M'){ //uno de los dos es M 
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
                    if(a.size() == b.size()){ //hay igual cantidad de S
                        cout << "=" << endl;
                    }
                    else if(a.size() > b.size()){ //b es menos small
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
                        cout << ">" << endl;
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


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t,tc=0;
// 	scanf("%d",&t); //asi esta obteniendo el valor de t
// 	while(t--){
// 		string A,B; //los string como tal
// 		cin>>A>>B;
// 		int a=A.size(),b=B.size(); //a,b Las longitudes 

// 		if(A.back()=='S')a*=-1; //si A es talla s...
// 		else if(A.back()=='M')a=0;

// 		if(B.back()=='S')b*=-1; //si B es talla s...
// 		else if(B.back()=='M')b=0;

// 		if(a<b)printf("<\n");
// 		else if(a>b)printf(">\n");

// 		else printf("=\n");
// 	}
// 	return 0;
// }





//SOLUCION CON UN MAPA EN PYTHON
// for i in range(int(input())):
//     a, b = map(str, input().split())
 
//     d = {"S": -1, "M": 2, "L": 3}
 
//     if d[a[-1]] > d[b[-1]]:
//         print(">")
//     elif d[a[-1]] < d[b[-1]]:
//         print("<")
//     else:
//         if len(a)*d[a[-1]] > len(b)*d[b[-1]]:
//             print(">")
//         elif len(a)*d[a[-1]] < len(b)*d[b[-1]]:
//             print("<")
//         else:
//             print("=")