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
        int k = n - 1;
        int ans = 0;
        while (k--)
        {
            n = n & k;
            if(n == 0) {
                ans = k + 1;
                break;
            }
        }
        cout << ans << "\n";

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