#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair <int,int> b){
    return a.first < b.first;
}

int main(){
    int test, n, x;
    cin >> test;
    while(test--){
        cin >> n >> x;
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].second;
            a[i].first = abs(x - a[i].second);
        }
        stable_sort(a.begin(), a.end(), cmp);
        for(auto i : a){
            cout << i.second << " ";
        }
        cout << endl;
    }
}