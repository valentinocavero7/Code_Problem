#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    
}
int main()
{
    cpu();
    string str;
    cin >> str;
    int m;
    cin >> m;
    ll n = str.size();
    vector<int> idx;
    map<char, pair<int, int>> m;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = i; j < n; j++)
        {
            if(str[i] == str[j]) {
                cnt++;
                continue;
            }
            i = j - 1;
            break;
        }
        m[str[i]] = make_pair();
    }
    int max_length = -1;
    int idx_id = 0;
    for (int i = 0; i < cnt.size(); i++)
    {
        int cnt = 0;
        for (int j = i; j < cnt.size(); i++)
        {
            str[i] = 1;
        }
        
    }
    // la llave es el char 
    // en el pair almaceno el suma de los varoles repetidos
    // en el second seria la diferencia de idx
    /*
       13

       1    9
       2    10
       3    11
       4    12
       5    +13 13 vs 14 = 13 || 13 vs 15 = 13
       6    14
       7    15 15 vs 16 = 15
       8    16
    
    */
}