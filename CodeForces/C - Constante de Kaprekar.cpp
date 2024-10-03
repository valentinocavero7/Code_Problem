#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        string X = to_string(num);
        string Y = "";
        sort(X.begin(), X.end());
        Y = X;
        reverse(Y.begin(), Y.end());
        cout << X << ' ' << Y;
    }
    
}