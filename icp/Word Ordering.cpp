#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    int n;
    cin >> n;
    vector<string> min;
    vector<string> may;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        string w;
        cin >> w;
        words[i] = w;
    }
    
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string strJ = words[j];
            if(str[i] == strJ[0]) {
                min.push_back(strJ);
            } else if(str[i] == tolower(strJ[0])) {
                may.push_back(strJ);
            }
        }
    }
    for (int i = 0; i < min.size(); i++)
    {
        int j = i;
        while (i < min.size() - 1)
        {
            string a = min[i];
            string b = min[i + 1];
            if(tolower(a[0]) == tolower(b[0])) {
                i++;
            } else {
                break;
            }
        }
        sort(min.begin() + j, may.begin() + i);
    }
    for (int i = 0; i < may.size(); i++)
    {
        int j = i;
        while (i < may.size() - 1)
        {
            string a = may[i];
            string b = may[i + 1];
            if(tolower(a[0]) == tolower(b[0])) {
                i++;
            } else {
                break;
            }
        }
        sort(may.begin() + j, may.begin() + i);
    }
    for(auto x : min) {
        cout << x << endl;
    }
    for(auto y : may) {
        cout << y << endl;
    }
}

