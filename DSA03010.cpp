#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int a[n];
        std::priority_queue<int, std::vector<int>, std::greater<int>> q;
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
            q.push(a[i]);
        }
        long long res = 0;
        while(q.size() > 1){
            long long x = q.top(); q.pop();
            long long y = q.top(); q.pop();
            q.push(x+y);
            res += x+y;
        }
        std::cout << res << std::endl;
    }
}