#include<bits/stdc++.h>

bool cmp(int a, int b){
    return a > b;
}

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
        std::sort(a, a+n, cmp);
        for(int i = 0; i < k; i++){
            std::cout << a[i] << " ";
        }
        std::cout << "\n";
    }
}