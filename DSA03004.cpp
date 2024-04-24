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
        std::string c = "";
        std::string b = "";
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                c += std::to_string(a[i]);
            }
            else{
                b += std::to_string(a[i]);
            }
        }
        int ans = std::stoi(c) + std::stoi(b);
        std::cout << ans << std::endl;
    }
}