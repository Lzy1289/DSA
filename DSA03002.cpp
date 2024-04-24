#include<bits/stdc++.h>

int Try(int n){
    int i = 0;
    int k[7];
    while(n > 0){
        k[i] = n % 10;
        if(k[i] == 5){
            k[i] = 6;
        } 
        i++;
        n = n/10;
    }
    std::reverse(k, k+i);
    int num = k[0];
    for(int j = 1; j < i; j++){
        num = num * 10 + k[j]; 
    }
    return num;
}


int Try1(int n){
    int i = 0;
    int k[7];
    while(n > 0){
        k[i] = n % 10;
        if(k[i] == 6){
            k[i] = 5;
        } 
        i++;
        n = n/10;
    }
    std::reverse(k, k+i);
    int num = k[0];
    for(int j = 1; j < i; j++){
        num = num * 10 + k[j]; 
    }
    return num;
}

int main(){
    int n, m;
    std::cin >> n >> m;
    int max = Try(n) + Try(m);
    int min = Try1(n) + Try1(m);
    std::cout << min << " " << max << std::endl;
}