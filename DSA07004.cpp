#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;
        std::stack<char> st;
        int open = 0, close = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ')'){
                open++;
                st.push(s[i]);
            }
            else{
                if(!st.empty() && st.top() == '('){
                    open--;
                    st.pop();
                }
                else{
                    close++;
                    st.push(s[i]);
                }
            }
        }
        int ans = close / 2 + open / 2;
        ans += close % 2 + open % 2;
        std::cout << ans << std::endl;
    }
}