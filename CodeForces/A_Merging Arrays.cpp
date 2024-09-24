#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    vector<int> ans(m + n, 0);
    int i = 0, j = 0, z = 0;
    while (i < n || j < m)
    {
        if((i < n && v1[i] < v2[j]) || j == m) {
            ans[z] = v1[i];
            i++;
            z++;
        }
        else {
            ans[z] = v2[j];
            j++;
            z++;
        }
    }
    for(auto a : ans) {
        cout << a << ' ';
    }
}