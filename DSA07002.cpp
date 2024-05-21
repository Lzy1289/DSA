#include<bits/stdc++.h>

int main(){
    int q;
    std::cin >> q;
    std::stack<int> st;
    std::string s;
    while(q--){
        std::cin >> s;
        int x;
        if(s == "PUSH"){
            std::cin >> x;
            st.push(x);
        }
        else if(s == "PRINT"){
            if(st.empty()){
                std::cout << "NONE" << std::endl;
            }
            else{
                std::cout << st.top() << std::endl;
            }
        }
        else if(s == "POP"){
            if(!st.empty()){
                st.pop();
            }
        }
    }       
}