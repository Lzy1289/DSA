#include<bits/stdc++.h>

int find(std::vector <int> a, int n, int k){
    int cnt = std::count(a.begin(), a.end(), k);
    return cnt;
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n, k;
        std::cin >> n >> k;
        std::vector<int> a(n);
        for(int i = 0 ; i < n; i++){
            std::cin >> a[i];
        }
        int ans = find(a, n, k);
        if(ans == 0){
            std::cout << "-1" <<"\n";
        }
        else{
            std::cout << ans << "\n";
        }
    }
}