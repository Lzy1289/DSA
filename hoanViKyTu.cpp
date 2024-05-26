#include<bits/stdc++.h>

int main(){
    char a, b;
    std::cin >> a >> b;
    if(int(a) > int(b)){
        std::swap(a, b);
    }
    std::string s = "";
    std::queue<std::string> st;
    
    for(int i = int(a); i <= int(b); i++){
        st.push(std::string(1, char(i)));
        std::string x = st.front();
        st.pop();
        s = s + x;
    }
    do{
        for(int i = 0; i < s.size(); i++){
            std::cout << s[i];
        }
        std::cout << std::endl;
    }
    while(next_permutation(s.begin(), s.end()));
}