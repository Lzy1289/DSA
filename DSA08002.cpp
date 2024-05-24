#include<bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;
    std::queue<std::string> q;
    while(n--){
        std::string s;
        std::cin >> s;
        if(s == "PUSH"){
            std::string x;
            std::cin >> x;
            q.push(x);
        }
        else if(s == "POP"){
            if(!q.empty()){
                q.pop();
            }
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty()){
                std::cout << q.front() << std::endl;
            }
            else{
                std::cout << "NONE" << std::endl;
            }
        }
    }
}