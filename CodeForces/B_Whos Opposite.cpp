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
        int a, b, c;
        cin >> a >> b >> c;
        int end_element = 2 * abs(a - b);
        if(abs(a - b) == 1 || max(a, max(b, c)) > end_element) {
            cout << -1 << "\n";
            continue;
        }
        if(c < 1 + abs(a - b)) {
            cout << c + abs(a - b) << "\n";
        } else {
            cout << c - abs(a - b) << "\n";
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