#include <bits/stdc++.h>
 
using namespace std; 
 
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n); // alt + shif + abaj
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> c;
    int cnt = 0;
    int i = 0;
    int j = 0;
    while (j < m)
    {
        while (i < n && a[i] < b[j])
        {
            i++;
            cnt++;
        }
        c.push_back(cnt);
        j++;
    }
    for(auto x : c) {
        cout << x << ' ';
    }
}
