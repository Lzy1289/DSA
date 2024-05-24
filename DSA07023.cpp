#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    std::cin.ignore();
    while(t--){
        std::string s;
        getline(std::cin, s);
        std::stack<std::string> st;
        std::stringstream ss(s);
        std::string word;
        while(ss >> word){
            st.push(word);
        }
        std::vector<std::string> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        for(auto x : v){
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
}