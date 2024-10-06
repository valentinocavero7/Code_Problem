#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    vector<int> par = {0, 2, 4, 6, 8};
    vector<int> imp = {1, 3, 5, 7, 9};
    if(b % 2 != 0) {
        for (int i = 0; i < 5; i++)
        {
            // a puede ser par o impar
            if(imp[i] != a && imp[i] != b) {
                v.push_back(imp[i]);
            }
        }
        for (int i = 0; i < 5; i++)
        {
            // b es impar
            if(par[i] != a) {
                v.push_back(par[i]);
            }
        }
    } else {
        // b es par
        for (int i = 0; i < 5; i++)
        {
            // a puede ser par o impar
            if(par[i] != a && par[i] != b) {
               v.push_back(par[i]); 
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if(imp[i] != a) {
                v.push_back(imp[i]);
            }
        }
    }

    for(auto a : v) {
        cout << a << ' ';
    }
    return 0;
}