#include <bits/stdc++.h>
using namespace std;
#define nline "\n"
 
void solve()
{
    int n, s, r;
    cin >> n >> s >> r;
 
    int maxNumber = s - r; 
    cout << maxNumber << " maxNumber:" << endl;

    int ans = r / (n - 1); //???
    int rem = r % (n - 1); //???
    cout << ans << " " << endl;
    cout << rem << " " << endl;
    for (int i = 1; i <= (n - 1); i++) //cantidad de numeros menos uno
    {
        if (rem > 0)
        {
            cout << ans + 1 << " ";
            rem--;
        }
        else //cuando rem se acabe entonces a "ans" no se le suma 1
        {
            cout << ans << " ";
        }
    }
    cout << nline;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tst = 1; cin >> tst;

    while (tst--)
    {
        solve();
    }
 
    return 0;
}