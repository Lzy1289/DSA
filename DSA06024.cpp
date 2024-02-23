#include<bits/stdc++.h>
using namespace std;

void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}

void selectSort(int a[], int n){
	int dem = 1;
	for(int i = 0; i < n - 1; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[min] > a[j]){
				min = j;
			}
		}
		swap(a[min], a[i]);
		cout << "Buoc " << dem << ": ";
		xuat(a, n);
		cout << endl;
		dem++;
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	selectSort(a, n);

}