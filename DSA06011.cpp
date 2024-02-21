#include<bits/stdc++.h>

int findClosetSum(int a[], int n){
    std::sort(a, a+n);
    int l = 0, r = n-1;
    int closet = INT_MAX;
    while(l<r){
        int s = a[l] + a[r];
        if(abs(s) < abs(closet)){
            closet = s;
        }
        if(s < 0){
            l++;
        }
        else{
            r--;
        }
    }
    return closet;
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int a[n];
        for(int i  = 0; i < n; i++){
            std::cin >> a[i];
        }
        int ans = findClosetSum(a, n);
        std::cout << ans << std::endl;
    }
}