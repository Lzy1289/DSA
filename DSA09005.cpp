#include<bits/stdc++.h>

bool visited[1000] = {false};
void bfs(int k, std::vector<std::vector<int>> ke){
    std::queue<int> q;
    q.push(k);
    visited[k] = true;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        std::cout << u << " ";
        for(auto x : ke[u]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int main(){
    int t;
    std::cin >> t;
    while(t--){
        memset(visited, false, sizeof(visited));
        int m, n, k;
        std::cin >> m >> n >> k;
        std::vector<std::vector<int>> ke(m+1);
        for(int i = 0; i < n; i++){
            int x, y;
            std::cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        bfs(k, ke);
        std::cout << std::endl;
    }
}