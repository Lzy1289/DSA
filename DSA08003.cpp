#include<bits/stdc++.h>

int main(){
    int q;
    std::cin >> q;
    std::deque<std::string> dq;
    while(q--){
        std::string s;
        std::cin >> s;
        if(s == "PUSHBACK"){
            std::string x;
            std::cin >> x;
            dq.push_back(x);
        }
        else if(s == "PUSHFRONT"){
            std::string x;
            std::cin >> x;
            dq.push_front(x);
        }
        else if(s == "PRINTFRONT"){
            if(dq.empty()){
                std::cout << "NONE" << std::endl;
            }
            else{
                std::cout << dq.front() << std::endl;
            }
        }
        else if(s == "PRINTBACK"){
            if(dq.empty()){
                std::cout << "NONE" << std::endl;
            }
            else{
                std::cout << dq.back() << std::endl;
            }
        }
        else if(s == "POPBACK"){
            if(!dq.empty()){
                dq.pop_back();
            }
        }
        else if(s == "POPFRONT"){
            if(!dq.empty()){
                dq.pop_front();
            }
        }
    }
}