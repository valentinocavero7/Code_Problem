#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if(n == 1) {
            cout << k << endl;
            continue;
        }
        if(n == k || (n > k && n % k == 0)) {
            cout << 1 << endl;
            continue;
        }
        if(n < k) {
            int a = k / n;
            int b = k % n;
            if(b != 0) a++;
            cout << a << endl;
        } else {
            int a = n / k;
            int b = n % k;
            if(b != 0) a++;
            k *= a;
            int c = k / n;
            int d = k % n;
            if(d != 0) c++;
            cout << c << endl;
        }
    }
    
}