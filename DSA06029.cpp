#include<bits/stdc++.h>

void selectionSort(int a[], int n){
    std::vector<std::vector<int>> v;
    for(int i = 1; i < n; i++){
        int pivot = a[i];
        int pos = i-1;
        while(pos >= 0 && pivot < a[pos]){
            a[pos + 1] = a[pos];
            --pos;
        }
        pos++;
        a[pos] = pivot;
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

}