#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    std::cin.ignore();
    std::vector<std::pair<int, int>> v;  
    for(int i = 1; i <= t; i++){
        std::string s, num;
        getline(std::cin, s);
        std::stringstream ss(s);
        while(ss >> num){
            if(std::stoi(num) > i){
                v.push_back({i, std::stoi(num)});
            }
        }
        
    }
    for(auto x : v){
        std::cout << x.first << " " << x.second << std::endl;
    }
}