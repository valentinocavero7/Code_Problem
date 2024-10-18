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
        string str;
        cin >> str;
        int a = str[0] - '0';
        int b = str[2] - '0';
        cout << a + b << endl;
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