#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    int cnt = 1;
    std::vector<std::pair<int>> v;  
    for(int i = 0; i < t; i++){
        int x, y;
        std::cin >> x >> y;
        if(cnt < x){
            p.insert({cnt, x});
        }
        if(cnt < y){
            p.insert({cnt, y});
        }
        cnt++;
    }
    for(auto x : p){
        std::cout << x.first << " " << x.second << std::endl;
    }
}