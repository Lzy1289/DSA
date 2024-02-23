#include<bits/stdc++.h>

void insertionSort(int a[], int n){
    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && a[j] < a[j-1]){
            std::swap(a[j], a[j-1]);
            j--;
        }
        
        std::cout << "Buoc " << i <<": "; 
        for(int k = 0; k <= i; k++){
            std::cout << a[k] << " ";
        }
        std::cout << "\n";
    }
}

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    insertionSort(a, n);
    return 0;
}