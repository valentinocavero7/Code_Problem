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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int f1, f2, l1, l2;
        f1 = (a > b) ? a : b;
        l1 = (a > b) ? b : a;
        f2 = (c > d) ? c : d;
        l2 = (c > d) ? d : c;
        if(min(f1, f2) > max(l1, l2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
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