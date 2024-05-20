#include<bits/stdc++.h>

long long f[100];

void fibo(){
    f[1] = f[2] = 1;
    for(int i = 3; i <= 100; i++){
        f[i] = f[i-1] + f[i-2];
    }
}

int main(){
    int t; std::cin >> t;
    fibo();
    while(t--){
        long long n, k;
        std::cin >> n >> k;
        while(true){
            if(n == 1 || n == 2){
                if(n == 1)  std::cout << "A";
                else    std::cout << "B";
                break;
            }
            if(k > f[n-2]){
                k -= f[n-2];
                n--;
            }
            else{
                n -= 2;
            }
        }
        std::cout << std::endl;
    }
}