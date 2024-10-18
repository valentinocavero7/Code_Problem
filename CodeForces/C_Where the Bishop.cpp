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
        vector<vector<char>> v(8, vector<char>(8));
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> v[i][j];
            }
        }
        int x, y;
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if(v[i][j] == '#') {
                    if(v[i - 1][j - 1] == v[i + 1][j - 1] && v[i + 1][j - 1] == '#') {
                        if(v[i - 1][j + 1] == v[i + 1][j - 1] && v[i + 1][j - 1] == '#') {
                            x = i + 1; y = j + 1;
                            break;
                        }
                    }
                }
            }
        }
        cout << x << ' ' << y << endl;
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