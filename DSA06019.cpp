#include<bits/stdc++.h>

bool cmp(std::pair<int, int> a, std::pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::map<int, int> mp;
        
        for(int i = 0; i < n; i++){
            int x;
            std::cin >> x;
            mp[x]++;
        }
        std::vector<std::pair<int, int>> v(mp.begin(), mp.end());
        std::sort(v.begin(), v.end(), cmp);
        for(auto x : v){
            for(int i = 0; i < x.second; i++){
                std::cout << x.first << " ";
            }
        }
        std::cout << "\n";
    }
}