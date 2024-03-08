#include<bits/stdc++.h>

void bubbleSort(int a[], int n){
    std::vector<std::vector<int>> v(n);
    for(int i = 0; i < n-1; i++){
        bool check = false;
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                check = true;
                std::swap(a[j], a[j+1]);
            }
        }
        
        if(!check)  break;
        for(int j = 0; j < n; j++){
            v[i].push_back(a[j]);
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(v[i].empty())    continue;
        std::cout << "Buoc " << i+1 << ": ";
        for(auto x : v[i]){
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        bubbleSort(a, n);
    }
}