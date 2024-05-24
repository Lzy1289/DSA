#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::queue<std::string> q;
        q.push("1");
        while(n--){
            std::string s = q.front();
            q.pop();
            std::cout << s << " ";
            q.push(s + '0');
            q.push(s + '1');
        }
        std::cout << std::endl;
    }
}