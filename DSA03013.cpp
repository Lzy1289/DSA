#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int d;
        std::string s;
        std::cin >> d >> s;
        int res = 0, cnt[1000] = {0};
        for(int i = 0; i < s.size(); i++){
            cnt[s[i]]++;
            if(res < cnt[s[i]]){
                res = cnt[s[i]];
            }
        }
        if((res-1) * (d-1) > s.size() - res)    std::cout << -1;
        else    std::cout << 1;
        std::cout << std::endl;
    }
    
}