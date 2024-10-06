#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n < 49) {
        cout << "TOO COLD";
    } else if(n <= 60) {
        cout << "ACCEPTED";
    } else {
        cout << "TOO HOT";
    }
    return 0;
}