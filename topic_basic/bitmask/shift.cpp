#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    
}
/*
    * Hay dos shift
        ! shift left
          ? hace que el numero se multiplique por 2, o sea mueva un bit a la izquierda
            * x << k = x . 2^k;

        ! shift rigth
         ? hace que el numero se divida entre 2, o sea que se mueva un bit a la derecha
            * x >> k = x / 2^k;
            * Cuando la division no es exacta nos quedamos con la parte entera
*/
int main()
{
    cpu();
    int x = 5;
    x = (x << 1);
    x <<= 3;
    cout << x << endl;
    int y = 120;
    y >>= 3;
    cout << y;
    return 0;
}