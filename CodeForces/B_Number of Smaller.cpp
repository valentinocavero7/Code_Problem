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
    int i = 0, j = 0;
    vector<int> c;
    while (j < m || i < n)
    { 
        if(a[i] < b[j]) {
            a[i] = 1;
        }
    }
    for(auto x : c) {
        cout << x << ' ';
    }
}