#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n, k;
        std::cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        std::sort(a, a+n);
        int ans1 = 0, ans2 = 0;
        int i = 0;
        while(i < n){
            if(i < k)   ans1 += a[i];
            else    ans2 += a[i];
            i++;
        }
        int res = abs(ans1 - ans2);
        i = 0;
        ans1 = ans2 = 0;
        while(i < n){
            if(i < n-k) ans1 += a[i];
            else    ans2 += a[i];
            i++;
        }
        res = std::max(res, abs(ans1 - ans2));
        std::cout << res << std::endl;
    }
}