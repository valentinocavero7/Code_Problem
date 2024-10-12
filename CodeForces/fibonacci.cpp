#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e8 + 7;
vector<ll> v(5 * 100000);
void solve()
{
    v[0] = 0;
    v[1] = 1;
    for (ll i = 2; i < v.size(); i++)
    {
        v[i] = ((v[i - 1] + v[i - 2]) + mod) % mod;
    }
}
int main()
{
    cpu();
    solve();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << v[n] << endl;
    }
    return 0;
}