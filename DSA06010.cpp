#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        set <int> ans;
        for(int i = 0; i < n; i++){
            while(a[i]){
                ans.insert(a[i]%10);
                a[i]/=10;
            }
        }
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
}