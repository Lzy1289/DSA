#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int n;
        std::cin >> n;
        int ans = 0;
        for(int i = 9; i >= 0; i--){
            ans += n / a[i];
            n = n % a[i];
        }
        std::cout << ans << std::endl;
    }
}