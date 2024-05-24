#include<bits/stdtr1c++.h>

void check(int n, int a[]){
    int i = 0;
    while(i < n){
        int ans = -1;
        if(i == n-1){
            std::cout << -1 << " ";
            i++;
        }
        else{
            for(int j = i+1; j < n; j++){
                if(a[i] < a[j]){
                    ans = a[j];
                    break;
                }
            }
            std::cout << ans << " ";
            i++;
        } 
    }
    std::cout << std::endl;
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
        check(n, a);
    }
}