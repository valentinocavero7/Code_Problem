#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    if(n < 100 || n > 100000) {
        cout << "NO SOLUTION";
        return 0;
    }
    //vector<string> str = {"Bad: ", "Good: ", "Great: ", "Perfect: "};
    //cout << n / 1000 << ' ' << n / 100 << ' ' << n / 10;
    //n -= (n / 1000) * 1000;
    //cout << n;
    for (int i = 0; i < 4; i++)
    {
        int div = 1;
        int j = 0;
        while (j < i)
        {
            div *= 10;
            j++;
        }
        if(n > div && div > 1) {
            n -= (n / div) * div;
            cout << n << ' ';
        }
    }
    
}