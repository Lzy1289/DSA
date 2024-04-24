#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;
set<vector<int>> ss;

void Try(int i, int sum) {
    for (int j = i; j < n; ++j) {
        b.push_back(a[j]);
        sum += a[j];
        if (sum % 2 == 1) {
            vector<int> s(b.rbegin(), b.rend());
            ss.insert(s);
        }
        if (j + 1 < n) Try(j + 1, sum);
        b.pop_back();
        sum -= a[j];
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        ss.clear();
        cin >> n;
        a.resize(n);
        for (int &i : a) cin >> i;
        sort(a.begin(), a.end());
        Try(0, 0);
        for (auto i : ss) {
            for (auto j : i) {
                cout << j << " ";
            }
            cout << endl;
        }
        cout << "\n";
    }
    return 0;
}