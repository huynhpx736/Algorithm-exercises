#include<iostream>
using namespace std;
void nhapMangMotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void tichLonNhat(int* a, int n) {
	long long max = -10000000000000000;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			max = 0;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] != 0) {
			long long tt = 1;									
			int dem = 0;
			for (int j = i; a[j] != 0&&j<n; j++) {
				tt *= a[j];
				// neu tich tim duoc lon hon max thi lay tich hien tai la max.
				if (tt > max) max = tt; 
			}
		}
	}
	cout << max;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int* a = new int[n];
		nhapMangMotChieu(a, n);
		tichLonNhat(a, n);
		cout << endl;
		delete[]a;
	}
	return 0;
}


