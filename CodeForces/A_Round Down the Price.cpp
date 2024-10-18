#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int d = 0;
        int i = 0;
        int k = 0;
        while (n - k >= 0 && d < n)
        {
            k = pow(10, i);
            i++;
            d = n - k;
        }
        cout << k << "\n";
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