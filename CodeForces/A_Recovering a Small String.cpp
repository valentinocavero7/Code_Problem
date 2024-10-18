#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string ans = "";
        if(n <= 28) {
            ans += "aa";
            ans += (char)('a' + n - 3);
        } else if(n <= 53) { 
            ans += 'a';
            ans += (char)('a' + n - 28);
            ans += 'z';
        } else {
            ans += (char)('a' + n - 53);
            ans += "zz";
        }
        cout << ans  << "\n";
    }
    
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