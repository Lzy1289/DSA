#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        std::sort(a, a+n);
        long long ans = 0;
        long long mod = 1e9+7;
        for(int i = 0; i < n; i++){
            ans += a[i] * i;
        }
        ans = ans % mod;
        std::cout << ans << std::endl;
    }
}