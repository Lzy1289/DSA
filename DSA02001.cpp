#include<bits/stdc++.h>

void print(int n, int a[]){
    std::cout << "[";
    for(int i = 0; i < n; i++){
        std::cout << a[i];
        if(i < n-1){
            std::cout << " ";
        }
    }
    std::cout << "]" << std::endl;
}

void Try(int i, int n, int a[]){
    if(n < 1)   return;
    for(int j = 0; j < n; j++){
        a[j] = a[j] + a[j+1];
    }
    print(n, a);
    Try(i+1, n-1, a);
}

int main(){
    int t; std::cin >> t;
    while(t--){
        int n; std::cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        print(n, a);
        Try(1, n-1, a);
    }
}