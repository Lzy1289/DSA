#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::set<int> s;
        for(int i = 0; i < n; i++){
            int x;
            std::cin >> x;
            s.insert(x);
        }
        std::vector<int> v(s.begin(), s.end());
        if(s.size() == 1)   std::cout << "-1" << "\n";
        else{
            std::cout << v[0] << " " << v[1] << "\n";
        }
    }
}