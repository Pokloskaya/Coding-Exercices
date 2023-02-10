#https://codeforces.com/problemset/problem/96/A
n = input()
flag = False
for i in range(len(n)):
    if(i + 6 < len(n)):
        if(n[i] == n[i+1] == n[i+2] == n[i+3] == n[i+4] == n[i+5] == n[i+6]):
            flag = True

if(flag): print("YES")
else: print("NO")


# //https://codeforces.com/problemset/problem/96/A
# #include <bits/stdc++.h>
# using namespace std;

# int main(){

#     string n; cin >> n;
#     bool flag = false;
#     int len = n.length();
#     //int num = stoi(n);
#     for(int i = 0; i < len; i++){
#         if(i + 6 < len){
#             if((n[i] == n[i+1] == n[i+2] == n[i+3] == n[i+4] == n[i+5] == n[i+6])){    
#                 cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
#                 flag = true;
#             }
#         }
#     }  
#     if(flag) cout << "YES";
#     else cout << "NO";
# }