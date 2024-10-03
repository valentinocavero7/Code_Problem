#include <bits/stdc++.h>

using namespace std;

bool isPrimo(int n) {
    bool ans = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if(n % i == 0) {
            ans = false;
        }
    }
    return ans;
}

int main() {
    int n; cin>>n;
    vector<int> r(n);
    for(int& x : r) cin>>x;
    sort(r.begin(), r.end());
    auto isPrime = [&](int n){
        bool ans = true;
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                ans = false;
            }
        }
        return ans;
    };
    int i = n-1;
    int game = 0;
    while(i>=0 && !isPrime(r[i])){
        game++;
    }
    if(game%2!=0){
        cout<<"Alice";
    }else{
        cout<<"Bob";
    }
    
}