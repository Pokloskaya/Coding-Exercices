#include <iostream>
#include <cstring>
using namespace std;
int a[26];
int t;
 
int main () {
	
	cin >> t;
	while(t--){
		memset(a,-1,sizeof a);
		//cout << a[0] << endl;
		int n;
		cin >> n;
		string b;
		cin >> b;
		bool ant = false;
		for(int i = 0 ; i < n ; i ++){
			
			if(a[b[i] - 'a'] != -1){
				if(! ( (i - a[b[i] - 'a']) & 1))
				{
					a[b[i] - 'a'] = i;
 				}
 				else
 					{
 						cout << "no" << " \n";
 						ant = true;
 						break;
					}
			}
			else if(a[b[i] - 'a'] == -1)
				a[b[i] - 'a'] = i;
		}
		if(!ant) 
			cout << "yes" << "\n";
	}
    return 0;
}
 