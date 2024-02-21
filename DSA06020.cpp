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
        int *ans = std::find(a, a+n, k);
        if(ans != a+n){
            std::cout << 1 << std::endl;
        }
        else{
            std::cout << -1 << std::endl;
        }
    }
}