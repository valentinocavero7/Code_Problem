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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int left = 0;
        int ans = 0;
        while (left < n)
        {
            if(str[left] == 'B') {
                ans++;
                int right = left;
                while (right < n && right < left + k)
                {
                    str[right] = 'W';
                    right++;
                }
                left = right - 1;
                //cout << str << ' ' << left << ' ' << right << "\n";
            }
            left++;
        }
        cout << ans << "\n";
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