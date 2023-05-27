#include<iostream>
using namespace std;
int demSoHangThoaMan(int a[][3], int n) {
	int demSoHang = 0;
	for (int i = 0; i < n; i++) {
		int demSo1 = 0;
		for (int j = 0; j < 3; j++) {
			if (a[i][j] == 1) demSo1++;
		}
		if (demSo1 >= 2) demSoHang++;
	}
	return demSoHang;
}
int main() {
	int n;
	cin >> n;
	int a[1000][3];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	cout << demSoHangThoaMan(a, n);
	return 0;
}
