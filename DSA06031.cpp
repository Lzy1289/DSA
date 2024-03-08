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
        for(int i = 0; i < n-k+1; i++){
            int max = *std::max_element(a+i, a+i+k);
            std::cout << max << " ";
        }
        std::cout << std::endl;
    }
}