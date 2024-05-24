#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;
        std::stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ')' && !st.empty() && s[st.top()] == '('){
                st.top();
            }
            else{
                st.push(i);
            }
        }
        if(st.empty()){
            std::cout << s.length();
        }
        std::vector<int> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        std::sort(v.begin(), v.end());
        
    }
}