#include<bits/stdc++.h>

bool check(int n, std::string s){
    int x = 0;
    for(int i = 0; i < s.length(); i++){
        x = (x*10 + (s[i] - '0')) % n; 
    }
    return x == 0;
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::queue<std::string> q;
        q.push("1");
        while(true){
            std::string s = q.front();
            q.pop();
            if(check(n, s)){
                std::cout << s << std::endl;
                break;
            }
            q.push(s + '0');
            q.push(s + '1');

        }
    }
}