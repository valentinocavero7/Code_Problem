#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    ll mask = 0;
    int q; cin >> q;
    while (q--)
    {
        int t; cin >> t;
        ll pos; cin >> pos;
        if(t == 0) {
            
            if((mask & (1LL << pos)) != 0) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
        if(t == 1) {
            mask << pos;
        }
    }
    
    cin >> n;
    if(n & (1LL << i) != 0) {
        cout << 1 << endl;
    }
}
int main()
{
    cpu();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}