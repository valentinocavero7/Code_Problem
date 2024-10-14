#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
/*
    *Operaciones basicas: OR, AND, XOR, NOT
    -Simpre hay un bit que indica el signo del numero
    
    ! 1. NOT:
    * bit del 3: 0000000 ..... 0010
    * Esos mismo numero en negativo: 111111 .... 1101

    ! 2. OR: 
       * Basta que exista un 1 para que todo sea 1
       ? x = 10; y = 3;
        ? x =       1010
        ? y =       0011
        ?x | y =    1011 = 11
    !  3. AND:
        * En el and es 1 (verdadero) si es que ambos son 1
        ? x = 29 = 11101
        ? y = 25 = 11001
        ? x & y =  11001 = 25
    
    !  4. XOR:
        * Si ambos son distinos (uno es 0 y el otro 1) nos da 1


    ! Propiedades: 
        * A | A = A
        * A | 0 = A
        * A & A = A
        * A & 0 = 0
        * A XOR A = 0
        * A XOR 0 = A
    
*/

void solve() {
    //cout << (~30)  << '\n';
    cout << (10 | 3);
}
int main()
{
    cpu();
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}