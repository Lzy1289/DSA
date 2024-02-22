#include<bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        cnt++;
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                std::swap(a[i], a[j]);
            }
        }
        std::cout << "Buoc " << cnt << ": ";
        for(int i = 0; i < n; i++){
            std::cout << a[i] << " ";
        } 
        std::cout << "\n";
    }
    return 0;
}