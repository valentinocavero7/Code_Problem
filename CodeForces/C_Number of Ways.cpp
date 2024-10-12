#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    /*
       1 2 3 0 3
       1 3 6 0 9

       9 8 6 3 3
       1 2|3|0 3
       1 2|3 0|3
       0 0 0 2 1
    */
    sum /= 3;
    ll sumtep = 0;
    vector<ll> idx(n);
    for (ll i = n - 1; i >= 0; i--)
    {
        sumtep += arr[i];
        idx[i] = (sumtep == sum ? 1 : 0);
    }
    /*
    for(auto a : idx) {
        cout << a << ' ';
    }
    cout << endl;
    */
    for (ll i = n - 2; i >= 0; i--)
    {
        idx[i] += idx[i + 1];
    }
    sumtep = 0;
    ll ans = 0;
    for (ll i = 0; i < n - 2; i++)
    {
        sumtep += arr[i];
        if(sumtep == sum) {
            ans += idx[i + 2];
        }
    }
    cout << ans << endl;
}