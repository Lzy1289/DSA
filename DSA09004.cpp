#include<bits/stdc++.h>
bool visited[1000] = {false};
std::vector<std::vector<int>> ke(1001);
void dfs(int k){
    std::cout << k << " ";
    visited[k] = true;
    for(auto x : ke[k]){
        if(!visited[x]){
            dfs(x);
        }
    }
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int m, n, k;
        std::cin >> m >> n >> k;
        for(int i = 1; i <= m; i++){
            ke[i].clear();
            visited[i] = false;
        }
        for(int i = 0; i < n; i++){
            int x, y;
            std::cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        dfs(k);
        std::cout << std::endl;
    }
}