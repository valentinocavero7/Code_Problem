#include <bits/stdc++.h>

using namespace std;

const int MOD = 60 * 24;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, H, M;
        cin  >> n >> H >> M;
        int min_sleep = 60 * H + M;
        int min_dif =  1e9;
        while (n--)
        {
            int h, m;
            cin  >> h >> m;
            int min_alarma = h * 60 + m;
            min_dif = min(min_dif, (min_alarma - min_sleep + MOD) % MOD);
        }
        cout <<  min_dif / 60 << " " << min_dif % 60 << endl;
    }

}