#include<bits/stdc++.h>

int main(){
    int x;
    std::stack<int> st;
    std::string s;
    while(std::cin >> s){
        if(s == "push"){
            std::cin >> x;
            st.push(x);
        }
        else if(s == "show"){
            if(st.empty()){
                std::cout << "empty" << std::endl;
            }
            else{
                std::stack<int> tmp = st;
                std::vector<int> a;
                while(!tmp.empty()){
                    a.push_back(tmp.top());
                    tmp.pop();
                }
                std::reverse(a.begin(), a.end());
                for(int i : a){
                    std::cout << i << " ";
                }
                std::cout << std::endl;
            }
        }
        else if(s == "pop"){
            if(!st.empty()){
                st.pop();
            }
        }
    }
}