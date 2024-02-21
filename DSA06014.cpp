#include<bits/stdc++.h>

std::vector<bool> isPrime(1e6+1, true);
void eratosthenes(){ 
    isPrime[0] = isPrime[1] = false;   
    for(int i = 2; i <= 1e3; i++){
        if(isPrime[i]){
            for(int p = i*i; p <= 1e6; p += i){
                isPrime[p] = false;
            }
        }
    }
}

int main(){
    int t;
    std::cin >> t;
    
    eratosthenes();
    while(t--){
        int n;
        std::cin >> n;
        bool test =false;
        for(int i = 0; i <= n/2; i++){
            if(isPrime[i] == true && isPrime[n-i] == true){
                std::cout << i << " " << n-i;
                test = true;
                break;
            }
        }
        if(!test){
            std::cout << -1;
        }   
        std::cout << "\n";
    }
}