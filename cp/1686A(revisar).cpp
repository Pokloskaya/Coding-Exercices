#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int t;
string n, m, igual, mayor, menor;
int main()
{
  
	cin>>t;
  vector<string> vec;
  
	while(t--)
	{
		cin>>n;
    cin>>m;
    igual = "=";
    mayor = ">";
    menor = "<";

    int nSize = n.size();
    int mSize = m.size();

    string lN;
    lN = n.back();

    string lM;
    lM = m.back();

    
    if(nSize == mSize){ //if they are equal 
      if(lN == lM){
        vec.push_back("=");
        // break;
        continue;
      }
    }

    if(lN == lM)
    { //la talla es la misma, y son S
      if(lN == "S"){
        if(nSize > mSize){
          vec.push_back("<");
        }else{
          vec.push_back(">");
        }
      }
    }

    if(lN == lM)
    { //la talla es la misma, y son L
      if(lN == "L"){
        if(nSize > mSize){
          vec.push_back(">");
        }else{
          vec.push_back("<");
        }
      }
    }
    //me falta en el caso de que sean M 

    if(lN == "M" && lM == "L"){
      vec.push_back("<"); //si M y L, el segundo es más grande
    }

    if(lN == "M" && lM == "S"){
      vec.push_back(">"); //si M y S, el primero es más grande
    }

    if(lN == "L" && lM == "M"){
      vec.push_back(">"); //si L y M, el primero es más grande
    }

    if(lN == "S" && lM == "M"){
      vec.push_back("<"); //si S y M, el segundo es más grande
    }
    // cout<<endl;
	}
   for (int i = 0; i < vec.size(); i++) {
      cout << vec.at(i) << endl;
  }
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