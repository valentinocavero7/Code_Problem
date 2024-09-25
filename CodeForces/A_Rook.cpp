#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--)
    {
        string pos;
        cin >> pos;
        // Eje Y
        for (int i = 1; i <= 8; i++)
        {
            if(i != (pos[1] - '0')){
                char ch = pos[0];
                string ans = ch + to_string(i);
                cout << ans << endl;
            }
        }
        // Eje X
        vector<char> c = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        for (int i = 1; i <= 8; i++)
        {
            if(c[i - 1] != pos[0]){
                char ch = c[i - 1];
                string ans = ch + to_string(pos[1] - '0');
                cout << ans << endl;
            }
        }
        
    }
    
}