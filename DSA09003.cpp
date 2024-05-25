#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int m, n;
        std::cin >> m >> n;
        std::vector<std::vector<int>> v(m+1);
        for(int i = 1; i <= n; i++){
            int x, y;
            std::cin >> x >> y;
            v[x].push_back(y);
        }
        for(int i = 1; i <= m; i++){
            std::cout << i << ": ";
            for(auto x : v[i]){
                std::cout << x << " ";
            }
            std::cout << std::endl;
        }
    }
}