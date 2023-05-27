//DEM SO PHAN TU LAP LAI CPP0274
#include<iostream>
#include<cmath>
#include<map>
using namespace std;
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void demSoPhanTuLapLai(int* a, int n) {
	int demPhanTuLap = 0;
	// tao mang map de luu cac gia tri khac nhau cua mang
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		// tao value cho cac phan tu trong mp la so lan xuat hien cua no trong mang
		mp[a[i]]++;
	}
	for (auto &i : mp) {
		// neu so lan suat hien cua phan tu trong mang mp lon hon 1 thi dem so lan se cong them no
		if (i.second > 1) demPhanTuLap += i.second;
	}
	cout << demPhanTuLap << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		int* a;
		int n;
		cin >> n;
		a = new int[n];
		nhapMang(a, n);
		demSoPhanTuLapLai(a, n);
	}
	return 0;
}

