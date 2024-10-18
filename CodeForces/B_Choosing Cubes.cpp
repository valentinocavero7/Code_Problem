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
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int num_fav = arr[f - 1];
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        if(arr[k - 1] != num_fav) {
            if(arr[k - 1] < num_fav) {
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
        } else {
            if(arr[k] == num_fav && k < n) {
                cout << "MAYBE" << endl;
            } else {
                cout << "YES" << endl;
            }
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