#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;
        std::stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ')' && !st.empty() && st.top() == '('){
                st.pop();
            }
            else if(s[i] == ']' && !st.empty() && st.top() == '['){
                st.pop();
            }
            else if(s[i] == '}' && !st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        std::cout << (st.empty() ? "YES" : "NO") << std::endl;
    }
}