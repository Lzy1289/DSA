#include<bits/stdc++.h>

int main(){
    int q;
    std::cin >> q;
    while(q--){
        std::string s;
        std::cin >> s;
        std::stack<int> st;
        if(s == "PUSH"){
            int x;
            std::cin >> x;
            st.push(x);
        }
        else if(s == "PRINT"){
            if(st.empty()){
                std::cout << "NONE" << std::endl;
            }
            else{
                std::stack<int> tmp = st;
                std::vector<int> a;
                while(!tmp.empty()){
                    a.push_back(tmp.top());
                    tmp.pop();
                }
                for(auto it = a.rbegin(); it != a.rend(); it++){
                    std::cout << *it << " ";
                }
                std::cout << std::endl;
            }
        }
    }       
}