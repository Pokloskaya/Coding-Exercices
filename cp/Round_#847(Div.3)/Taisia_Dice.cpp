//https://codeforces.com/contest/1790/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--){
        int n, s, r;
        cin >> n >> s >> r;

        int max = s-r;

        int arr[n]{}; //{} initializes all the elements of the array to their default value,

        for (int i=0; i<n;i++){ 
            arr[i]=max;
        }

        int suma = max*n; 
        int i=1;
        while (suma!=s) {
            if (i==n) i=1;
            arr[i]--;
            suma--;
            i++;
        }

        for (int i=0; i<n; i++){
            cout << arr[i] << " ";
        }

	}
	return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t, n, r, s;
//     cin >> t;
//     while(t--){
//         cin >> n >> s >> r;
//         int arr[n];
//         int max = s-r;
//         arr[0] = max;
//         int sum = arr[0];
//         for(int i= 1; i < n; i++){
//             arr[i] = max;
//             sum += arr[i];
//         }
//         sum = sum - arr[0];
//         int i = 1;
//         while(sum != r){ //6 4 2 3 2 para 5 17 11 
//             if(i == n) i = 1;
//             i += 1;
//             arr[i] = arr[i] - 1; sum = sum - 1;
//         }
//         cout << "suma: "<< sum << endl;
//         if(sum + 1 == r) arr[n-1] = arr[n]+1;
//         else arr[1] = arr[1] - 1; 

//         cout << "resultado es ";
//         for(int i= 0; i < n; i++){
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }