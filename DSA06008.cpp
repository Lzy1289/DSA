#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int x[n], y[m];
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }
        for(int i = 0; i < m; i++){
            cin >> y[i];
        }
        int cnt = 0;
        sort(x, x+n);
        sort(y, y+m);
        int i = 0, j = 0;
        while(i < n && j < m){
            if(x[i] == y[j]){
                ++i;
                ++j;
            }
            else{
                if(pow(x[i], y[j]) > pow(y[j], x[i])){
                    cnt++;
                }
                else{
                    j++;
                }
            }
        }
        while()
        cout << cnt << endl;
    }
}