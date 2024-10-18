#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const int MOD = 10;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> wheels(n);
        // d seria aumentar, el inverso
        // u seria decrementar
        for (int i = 0; i < n; i++)
        {
            cin >> wheels[i];
        }
        for (int i = 0; i < n; i++)
        {
            int c; cin >> c;
            string str; cin >> str;
            for (int j = 0; j < c; j++)
            {
               (str[j] == 'U') ? wheels[i] = (wheels[i] - 1 + MOD) % MOD : wheels[i] = (wheels[i] + 1) % MOD;
            }
            
        }
        for(auto a : wheels) {
            cout << a << ' ';
        }
        cout << '\n';

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