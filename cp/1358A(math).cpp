#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCases; cin>>testCases;
    while(testCases--){
        double  A,B;
        cin>>A>>B;
        int answer = ceil((A*B) / 2); //operacion resultado
        cout<<answer<<endl;
    }
    return 0;
}