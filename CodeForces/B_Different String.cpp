#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        set<char> s;
        for (int i = 0; i < str.size(); i++)
        {
            char ch = str[i];
            s.insert(ch);
        }
        if(s.size() == 1) {
            cout << "NO" << endl;
        } else {
            char ch = str[0];
            str = str.substr(1);
            str += ch;
            cout << "YES" << endl;
            cout << str << endl;
        }
        
    }
    
}