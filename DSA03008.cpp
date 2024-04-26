#include<bits/stdc++.h>

struct data{
    int fi, se;
};

bool cmp(data a, data b){
    return a.se < b.se;
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        data h[n];
        for(int i = 0; i < n; i++){
            std::cin >> h[i].fi;
        }
        for(int i = 0; i < n; i++){
            std::cin >> h[i].se;
        }
        std::sort(h, h+n, cmp);
        int d = 1, i = 0;
        for(int j = 1; j < n; j++){
            if(h[j].fi >= h[i].se){
                d++;
                i=j;
            }
        }
        std::cout << d << std::endl;
    }
    return 0;
}