#include<bits/stdc++.h>

void merge(int a[], int b[], int n, int m){
    int i = 0, j = 0, l = 0;
    int c[m+n];
    while(i < n && j < m){
        if(a[i] <= b[j]){
            c[l] = a[i];
            i++;
            l++;
        }
        else{
            c[l] = b[j];
            j++;
            l++;
        }
    }
    while(i < n){
        c[l] = a[i];
        i++;
        l++;
    }
    while(j < m){
        c[l] = b[j];
        j++;
        l++;
    }
    for(int x : c){
            std::cout << x << " ";
        }
    std::cout << "\n";
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n, m;
        std::cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            std::cin >> b[i];
        }
        std::sort(a, a+n);
        std::sort(b, b+m);
        merge(a, b, n, m);
    }
}