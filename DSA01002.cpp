#include<bits/stdc++.h>

void next(int a[], int n, int k){
    int i = k;
    while(i > 0 && a[i] == n-k+i){
        i--;
    }
    if(i == 0){
        for(int j = 1; j <= k; j++){
            std::cout << j << " ";
        }
    }
    else {
        a[i]++;
        for(int j = i+1; j <= k; j++){
            a[j] = a[j-1] + 1;
        }
        for(int j = 1; j <= k; j++){
            std::cout << a[j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n, k;
        std::cin >> n >> k;
        int a[k+1];
        for(int i = 1; i <= k; i++){
            std::cin >> a[i];
        }
        next(a, n, k);
    }
}