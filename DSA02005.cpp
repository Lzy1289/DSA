#include<bits/stdc++.h>

int si(int n){
    int res = 1;
    for(int i = 2; i <= n; i++){
        res *= i;
    }
    return res;
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;
        int cnt = si(s.size());
        while(cnt--){
            std::cout << s << " ";
            next_permutation(s.begin(), s.end());
        }
        std::cout << std::endl;
    }
}