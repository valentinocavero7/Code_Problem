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
        int ans = 0;
        int n, r;
        cin >> n >> r;
        int pairs = 0;
        int alone = 0;
        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            pairs += (a / 2);
            alone += a % 2;
        }
        int new_row = pairs + alone;
        while(new_row > r) {
            alone -= 2;
            new_row--;
        }
        ans = (pairs * 2) + alone;
        cout << ans << endl;
    }
    
}
int main()
{
    cpu();
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}