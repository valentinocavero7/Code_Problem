#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    vector<int> pref(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        pref[i + 1] = pref[i];
        int j = num[i];
        pref[i + 1] += j;
    }
    
}