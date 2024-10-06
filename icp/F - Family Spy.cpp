#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n, m;
    cin >> n >> m;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        x += a;
        y += b;
    }
    for (ll i = 0; i < m; i++)
    {
        ll c, d;
        cin >> c >> d;
        x += (c * n);
        y += (d * n);
        cout << x << ' ' << y << endl;
    }
    return 0;
}