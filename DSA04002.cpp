#include<bits/stdc++.h>

long long MOD = 1e9 + 7;

long long rev(long long n){
    long long r = 0;
    while(n){
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

long long poww(long long n, long long k) {
    if (k == 0) return 1;
    long long x = poww(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        long long n;
        std::cin >> n;
        long long r = rev(n);
        std::cout << poww(n, r) << std::endl;
    }
}