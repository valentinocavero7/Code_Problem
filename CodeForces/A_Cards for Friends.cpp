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
        int w, h, n;
        cin >> w >> h >> n;
        if(n == 1) {
            cout << "YES" << endl;
            continue;
        }
        int cutx = 1;
        int cuty = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            cutx <<= 1;
        }
        while (h % 2 == 0)
        {
            h /= 2;
            cuty <<= 1;
        }
        if(cuty * cutx >= n) {
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