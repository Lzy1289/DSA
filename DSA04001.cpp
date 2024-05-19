#include<bits/stdc++.h>

long long mod = 1e9+7;

long long mul(long long n, long long k){
    if(k==0)    return 0ll;
    long long tmp = mul(n, k/2);
    if(k % 2 == 1)  return (tmp*2+n) % mod;
    return tmp*2 % mod;
}

long long Pow(long long n, long long k){
    if(k==0)    return 1;
    if(k==1)    return n % mod;
    long long tmp = Pow(n, k/2);
    long long ans = mul(tmp, tmp);
    if(k% 2 == 1)   return ans*n % mod;
    return ans % mod;
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        long long n, k;
        std::cin >> n >> k;
        std::cout << Pow(n, k) << std::endl;      
    }
}