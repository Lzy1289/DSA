#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
            b[i] = a[i];
        }
        std::sort(b.begin(), b.end());
        int ok = 1;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i] && a[i] != b[n-i-1]){
                ok = 0;
                break;
            }
        }
        if(ok){
            std::cout << "Yes" << std::endl;
        }
        else{
            std::cout << "No" << std::endl;
        }
    }
}