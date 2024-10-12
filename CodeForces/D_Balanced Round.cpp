#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        int best_length = -1;
        int length = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            ll j = i;
            while (j < n - 1 && abs(arr[j + 1] - arr[j]) <= k)
            {
                length++;
                j++;
            }
            i = j;
            if(length > best_length) {
                best_length = length;
            }
            length = 0;
        }
        cout << n - (best_length + 1) << endl;
    }
}