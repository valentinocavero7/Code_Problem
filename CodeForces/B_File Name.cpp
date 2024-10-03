#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int i = 0;
    int j = 0;
    int cnt = n;
    while (j < n && cnt > 2)
    {
        while(str[i] != str[i + 1] && str[i + 1] != str[i + 2] && str[i + 2] != 'x') {
            str = str.substr(i + 1);
            cnt = str.size();
            j++;
            continue;
        }
        j++;
    }
    cout << n - cnt << endl;
}