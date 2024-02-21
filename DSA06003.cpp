#include<bits/stdc++.h>
using namespace std;

int cntSwap(int a[], int n){
	int cnt = 0;
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i+1; j < n; j++){
			if(a[min] > a[j]){
				min = j;
			}
		}
		if(min != i){
			swap(a[i], a[min]);
			cnt++;
		}
	}
	return cnt;
}

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
		int ans = cntSwap(a, n);
		cout << ans << endl;
	}
}                         