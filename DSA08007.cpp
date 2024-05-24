#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string n;
        std::cin >> n;
        std::queue<std::string> q;
        q.push("1");
        int cnt = 0;
        while(!q.empty()){
            std::string s = q.front();
            q.pop();
            cnt++;
            std::string x = s + "0";
            if(x.length() > n.length() || x.length() == n.length() && x > n){
                break;
            }
            q.push(x);
            x = s + "1";
            if(x.length() > n.length() || x.length() == n.length() && x > n){
                break;
            }
            q.push(x);
        }
        std::cout << cnt + q.size() << std::endl;
    }
}