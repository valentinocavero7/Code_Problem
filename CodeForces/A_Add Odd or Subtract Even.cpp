#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        if(a == b) {
            cout <<  0 << endl;
            continue;
        }
        if(a > b){
            if((a - b) % 2 == 0) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        } else {
            if((b - a) % 2 != 0) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
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