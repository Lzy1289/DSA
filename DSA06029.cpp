#include<bits/stdc++.h>

void selectionSort(int a[], int n){
    std::vector<std::vector<int>> v(n);
    for(int i = 0; i < n; i++){
        int pivot = a[i];
        int pos = i-1;
        while(pos >= 0 && pivot < a[pos]){
            a[pos + 1] = a[pos];
            --pos;
        }
        pos++;
        a[pos] = pivot;
        for(int j = 0; j <= i; j++){
            v[i].push_back(a[j]);
        }
    }
    for(int i = n-1; i >= 0; i--){
        std::cout << "Buoc " << i <<": ";
        for(auto x : v[i]){
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    selectionSort(a, n);
    // for(int i = 0; i < n; i++){
    //     std::cout << a[i] << " ";
    // }
}