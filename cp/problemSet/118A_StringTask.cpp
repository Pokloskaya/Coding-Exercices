//https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word; cin >> word;
    string result = "";
    for(int i = 0; i < word.size(); i++){
        if(word[i] == 'a' || word[i] == 'A' || word[i] == 'o' || word[i] == 'O' || word[i] == 'y' || word[i] == 'Y' || word[i] == 'e' || word[i] == 'E' || word[i] == 'u' || word[i] == 'U' || word[i] == 'i' || word[i] == 'I'){ ////A", "O", "Y", "E", "U", "I"
            continue;
        }else{
            result += ".";
            result += (char)tolower(word[i]);
        }
    }
    cout << result << endl;
}
