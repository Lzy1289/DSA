#include<bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        std::vector<std::vector<int>> v;
        for(int i = 0; i < n-1; i++){
            for(int j=i+1; j < n; j++){
                if(a[j] < a[i]){
                    std::swap(a[i], a[j]);
                }
            }
            std::vector<int> s;
            for(int k = 0; k < n; k++){
                s.push_back(a[k]);
            }
            v.push_back(s);
        }
        for(int i = v.size() - 1; i >= 0; i--){
            std::cout << "Buoc "  << i+1 << ": ";
            for(int j = 0; j < n; j++){
                std::cout << v[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
}