#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int min_price = 0;
    for (int i = 0; i < n; i++)
    {
        int price = c[i];
        int cnt = 0;
        for (int j = i; j < n; j++)
        {
            if(c[j] <= c[i]) {
                cnt++;
            }
        }
        
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