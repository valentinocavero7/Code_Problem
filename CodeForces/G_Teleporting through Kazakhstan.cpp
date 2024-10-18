#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> e(n + 1);
    e[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> e[i];
    }
    ll min_distance = e[1];
    for (int i = 2; i < n + 1; i++)
    {
        if(e[i] == e[i + 1] && i + 1 < n + 1) {
            i++;
            continue;
        }
        min_distance += min(abs(e[i] - e[i - 1]), abs(e[i] - e[i - 2]));
    }
    cout << min_distance << endl;
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