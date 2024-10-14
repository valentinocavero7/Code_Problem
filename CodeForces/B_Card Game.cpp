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
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int game_won = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2)) {
                    game_won++;
                }
                swap(b1, b2); 
            }
            swap(a1, a2);
        }
        cout << game_won << endl;
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