#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    /*
        * A XOR C = B, multiplicamos por A XOR a todo
        * A XOR A XOR C = A XOR B, como A XOR A = 0
        * 0 XOR C = A XOR B, pero como 0 XOR  C = C
        * C = A XOR B
    */
}
int main()
{
    cpu();
    int a, b;
    cin >> a >> b;
    int c = a ^ b;
    cout << c;
    return 0;
}