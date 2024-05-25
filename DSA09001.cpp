#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int m, n;
        std::cin >> m >> n;
        std::vector<std::vector<int>> ke(m+1);
        while(n--){
            int x, y;
            std::cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i = 1; i <= m; i++){
            std::cout << i << ": ";
            for(auto x : ke[i]){
                std::cout << x << " ";
            }
            std::cout << std::endl;
        }
    }
}