#include<bits/stdc++.h>

int main(){
    int t;  std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::queue<std::string> q;
        q.push("6");
        q.push("8");
        std::vector<std::string> v;
        while(!q.empty()){
            std::string s = q.front();
            q.pop();
            if(s.length() > n){
                break;
            }
            v.push_back(s);
            q.push(s+"6");
            q.push(s+"8");
        }
        std::cout << v.size() << std::endl;
        for(auto x : v){
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
}