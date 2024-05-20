#include<bits/stdc++.h>

long long mul(int n){
    if(n==0)    return 1;
    if(n==1)    return 2;
    long long p = mul(n/2);
    if(n%2==0)  return p*p;
    return 2*p*p;
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n, k;
        std::cin >> n >> k;
        while(1){

        }
    }
}