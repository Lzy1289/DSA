#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n, m;
        std::cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            std::cin >> b[i];
        }
        int &min_element = *std::min_element(b, b+m);
        int &max_element = *std::max_element(a, a+n);
        long long ans = 1ll * min_element * max_element;
        std::cout << ans << std::endl;
    }
}