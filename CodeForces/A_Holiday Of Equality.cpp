#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int maxE = arr[n - 1];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (maxE - arr[i]);
    }
    cout << ans << endl;
}