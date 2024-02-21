#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int m, n;
        cin >> m >> n;
        int a[m], b[n];
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a + n);
        vector<int> giao;
        vector<int> hop;
        int i = 0, j = 0, h = 0, g = 0;
        while(i < m && j < n){
            if(a[i] == b[j]){
                giao.push_back(a[i]);
                hop.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i] < b[j]){
                hop.push_back(a[i]);
                i++;
            }
            else if(a[i] > b[j]){
                hop.push_back(b[j]);
                j++;
            }
        }
        while(i < m){
            hop.push_back(a[i]);
            i++;
        }
        while(j < n){
            hop.push_back(b[j]);
            j++;
        }
        for(auto i : hop){
            cout << i << " ";
        }
        cout << endl;
       
        for(auto i : giao){
            cout << i << " ";
        }
        cout << endl;
    }
}