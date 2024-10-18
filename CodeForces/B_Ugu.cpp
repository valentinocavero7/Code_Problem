#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        string str;
        cin >> str;
        int n = str.size();
        if(x == 1) {
            cout << 0 << endl;
            continue;
        }
        int j = 0;
        int cnt = 0;
        int zeros = count(str.begin(), str.end(), '0');
        if(zeros != x && str[0] == '0') {
            cnt--;
        }
        while(j < n){
            if(str[j] == '1') {
                while(str[j] == '1' && j < n) {
                    j++;
                }
                
            }
            else {
                while (str[j] == '0' && j < n)
                {
                    j++;
                }
            }
            cnt++;
        }
        cout << cnt - 1 << endl;
    }
}

int main() {
    cpu();
    solve();
    return 0;
}
