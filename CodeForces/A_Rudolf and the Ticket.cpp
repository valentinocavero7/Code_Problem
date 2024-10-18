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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> l(n);
        vector<int> r(m);
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> r[i];
        }
        sort(l.begin(), l.end());
        sort(r.begin(), r.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(l[i] + r[j] <= k) {
                    ans++;
                    continue;
                }
            }
            
        }
        cout << ans << endl;
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