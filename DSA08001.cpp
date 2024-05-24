#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int k;
        std::cin >> k;
        std::queue<int> q;
        while(k--){
            int n;
            std::cin >> n;
            switch(n){
                case 1:
                    std::cout << q.size();
                    break;
                case 2:
                    std::cout << (q.empty() ? "YES" : "NO") << std::endl;
                    break;
                case 3:{
                    int m;
                    std::cin >> m;
                    q.push(m);
                    break;
                }
                case 4:
                    if(!q.empty()){
                        q.pop();
                    }
                    break;
                case 5:
                    if(!q.empty()){
                        std::cout << q.front() << std::endl;
                    }
                    else{
                        std::cout << -1 << std::endl;
                    }
                    break;
                case 6:
                    if(!q.empty()){
                        std::cout << q.back() << std::endl;
                    }
                    else{
                        std::cout << -1 << std::endl;
                    }
                    break;
            }
        }
    }
}