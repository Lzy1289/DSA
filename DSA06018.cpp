#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        std::sort(a, a+n);
        int cnt = 0;
        for(int i = a[0]; i < a[n-1]; i++){
            if(std::find(a, a+n, i) == a+n){
                cnt++;
            }
        }
        std::cout << cnt << "\n";
    }
}