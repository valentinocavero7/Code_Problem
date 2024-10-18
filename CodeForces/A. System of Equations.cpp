#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i * i <= n; i++)
    {
        for (int j = 0; j * j <= m; j++)
        {
            if(i * i + j == n  && i + j * j == m) {
                ans++;
            }

        }
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