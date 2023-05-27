#include<iostream>
using namespace std;
void nhapMang(int* a, int n){
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void demCap(int* a, int n, int k) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == k) dem++;
		}
	}
	cout << dem << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		int* a;
		a = new int[n];
		nhapMang(a, n);
		demCap(a, n, k);
	}
	return 0;
}
