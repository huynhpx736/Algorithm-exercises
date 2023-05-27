//HIEU LON NHAT CUA CAP PHAN TU DUNG THU TU CPP0210
#include<iostream>
using namespace std;
void nhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
int kiemTraHieu(int* a, int n) {
	if (n == 1) return -1;
	if (n == 2) {
		if (a[1] - a[0] < 0) return -1;
		return a[1] - a[0];
	}
	int hieuMax = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			//xet hieu cua 2 phan tu sau va truoc bat ki trong mang
			int tem = a[j] - a[i];
			if (tem < 0) break;
			if (tem >= hieuMax) {
				hieuMax = tem;
			}
		}
	}
	// neu hieu =0 tuc la cac phan tu phia sau luon be hon phia truoc , hieu max khong dc khoi tao, return -1
	if (hieuMax == 0) return -1;
	return hieuMax;
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
		cout << kiemTraHieu(a, n) << endl;
		delete[]a;
	}
	return 0;
}

