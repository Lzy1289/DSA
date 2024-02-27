#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;
        int idx = s.size() - 1;
        while(s[idx] == '1'){
            s[idx] = '0';
            idx--;
        }
        if(idx >= 0) s[idx] = '1';
        std::cout << s << std::endl;
    }
}