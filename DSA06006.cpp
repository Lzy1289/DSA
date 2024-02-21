#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){
	for(int i = 0; i < n; i++){
		bool check = false;
		for(int j = 0; j < n-i-1; j++){
			if(a[j] > a[j+1]){
				check = true;
				swap(a[j], a[j+1]);
			}
			
		}
		if(!check)	break;
	}
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
		bubbleSort(a, n);
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}