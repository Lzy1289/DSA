#include<bits/stdc++.h>

int check(int n, int k, int a[]){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= k){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int t; std::cin >> t;
    while(t--){
        int n, k;
        std::cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        std::sort(a, a+n);
        if(check(n, k, a)){
            std::cout << check(n, k, a) << std::endl;
        }
        else{
            std::cout << -1 << std::endl;
        }
    }
}