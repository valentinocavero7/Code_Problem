#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    int i = n / 2;
    string ans = "";
    if(n == 1) {
        cout << str << "\n";
    }
    while (i >= 1 && n != 1)
    {
        ans += str[i - 1];
        ans += str[n - i];
        i--;
    }
    cout << ans << "\n";
}
int main()
{
    cpu();
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}