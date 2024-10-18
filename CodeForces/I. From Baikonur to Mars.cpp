#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    bool val = false;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0) {
            arr[i] -= 1;
            val = true;
        }
    }
    if(val) {
        cnt++;
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0 && arr[i] > 0) {
            cnt++;
            break;
        }
    }
    cout << cnt << endl;
    
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
