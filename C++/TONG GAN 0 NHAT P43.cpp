#include<iostream>	
#include<cmath>
using namespace std;
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void tongGan0(int* a, int n) {
	int tongGan0Nhat = a[0] + a[1];
	int tongHaiSo = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int temp = a[i] + a[j];
			if (abs(temp) < abs(tongGan0Nhat))
				tongGan0Nhat = temp;
		}
	}
	cout << tongGan0Nhat << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a;
		int n;
		do {
			//cout << "Nhap n: ";
			cin >> n;
			//if (n < 2 || n>1000000) cout << "n khong hop le nnhap lai: \n";
		} while (n < 2 || n>1000000);
		a = new int[n];
		nhapMang(a, n);
		tongGan0(a, n);
		delete[]a;
	}
	return 0;
}


