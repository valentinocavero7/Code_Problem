#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll cnt = 0, i = 0, j = 0, k = 0;
    while (j < m)
    {
        while (i < n && a[i] < b[j])
        {
            i++;
        }
        while (k < n && a[k] <= b[j])
        {
            k++;
        }
        cnt += (k - i);
        j++;
    }
    cout << cnt << endl;
}