#include<iostream>	
#include<cmath>
using namespace std;
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void sapXep(int* a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				int tem = a[i];
				a[i] = a[j];
				a[j] = tem;
			}
		}
	}
}
void lietKe_K_PhanTuLonNhat(int* a, int n, int k) {
	sapXep(a, n);
	for (int i = 0; i < k; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a;
		int n, k;
		cin >> n >> k;
		a = new int[n];
		nhapMang(a, n);
		lietKe_K_PhanTuLonNhat(a, n, k);
		delete[]a;
	}
	return 0;
}


