#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        int min;
        int max;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                min = i+1;
                break;
            }      
        }
        for(int i = n-1; i >= 0; i--){
            if(a[i] != b[i]){
                max = i+1;
                break;
            }
        }
        cout << min << " " << max << endl;
    }
}