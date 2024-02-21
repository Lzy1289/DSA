#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i+=2){
            int max = i;
            int min = i+1;
            for(int j = i + 1; j < n; j++){
                if(a[max] < a[j]){
                    swap(a[max], a[j]);
                }
                
                if(a[min] > a[j]){
                    swap(a[min], a[j]);
                }
            }
            swap(a[min], a[i+1]);
            swap(a[max], a[i]);
        }
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}