#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v;

void Try(int i, int n, int a[]){
    if(n < 1)  return;

    for(int j = 0; j < n - 1; j++){
        a[j] = a[j] + a[j+1];
        v[i].push_back(a[j]);
    }
    Try(i + 1, n - 1, a);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        v = vector<vector<int>>(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            v[0].push_back(a[i]);
        }
        // Khởi tạo lại v với kích thước n
       

        Try(1, n, a);

        // In kết quả từ v
        for(int j = n - 1; j >= 0; j--){
            cout << "[";
            for(int k = 0; k < v[j].size(); k++){
                cout << v[j][k];
                if(k < v[j].size() - 1){
                    cout << " ";
                }
            }
            cout << "]";
            if(j > 0){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
