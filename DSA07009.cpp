#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;
        std::stack<std::string> st;
        for(int i = s.length() - 1; i >= 0; --i){
            std::string tmp = std::string(1,s[i]);
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                std::string x = st.top();
                st.pop();
                std::string y = st.top();
                st.pop();
                std::string z = "(" + x + tmp + y + ")";
                st.push(z);
            }
            else{
                st.push(tmp);
            }
        }
        std::cout << st.top() << std::endl;
    }
}