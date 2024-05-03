#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        std::string s;
        std::cin >> s;
        int n = s.size();
        int cnt[1000] = {0}, res = 0;
        for(int i = 0; i < n; i++){
            cnt[s[i]]++;
            if(res < cnt[s[i]]){
                res = cnt[s[i]];
            }
        }
        if(n % 2 == 0 && res <= n - res)    std::cout << 1;
        else if(n % 2 == 1 && res <= n/2+1) std::cout << 1;
        else    std::cout << -1;
        std::cout << std::endl;
    }

}