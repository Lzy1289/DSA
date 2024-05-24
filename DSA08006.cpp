#include<bits/stdc++.h>

bool check(std::string s, int n){
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
        q.push("9");
        while(true){
            std::string s = q.front();
            q.pop();
            if(check(s, n)){
                std::cout << s << std::endl;
                break;
            }
            q.push(s + "0");
            q.push(s + "9");
        }
    }

}