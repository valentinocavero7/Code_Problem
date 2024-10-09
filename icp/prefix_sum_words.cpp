#include <bits/stdc++.h>

using namespace std;
/*
You are given a string S of length N.
Answer Q queries: given L and R, find the most
common character in the substring S[L..R].
*/
int main() {
    string str;
    cin >> str;
    int n = str.size();
    vector<vector<int>> pref(n + 1, vector<int> (26));

    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i];
        int char_id = str[i] - 'a';
        pref[i + 1][char_id]++;
        cout << pref[i + 1][char_id] << endl;
    }
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int L, R;
        cin >> L >> R;
        char best_char = '?';
        int best_freq = -1;
        for (int char_id = 0; char_id < 26; i++)
        {
            int freq = pref[R + 1][char_id] - pref[L][char_id];
            if(freq > best_freq) {
                best_freq = freq;
                best_char = char_id + 'a';
            }
        }
        cout << best_char << endl;
    }
}