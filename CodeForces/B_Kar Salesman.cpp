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
        ll n, x;
        cin >> n >> x;
        vector<ll> cars(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> cars[i];
            sum += cars[i];
        }
        sort(cars.begin(), cars.end());
        ll max_element = cars[n - 1];
        ll ans = max((sum + x - 1) / x, max_element);
        cout << ans << endl; 
    }
}
int main()
{
    cpu();
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}