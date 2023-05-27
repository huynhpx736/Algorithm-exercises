//SAP XEP XEN KE P123
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
void nhapMangMotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void sapXepMangMotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {		// sap xep tang dan
				//hoan doi a[i] va a[j]
				int tem = a[i];
				a[i] = a[j];
				a[j] = tem;
			}
		}
	}
}
void sapXepXenKe(int* a, int n) {
	sapXepMangMotChieu(a, n);
	//sap xep xong chia mang 2 phan
	//tu dau den giua mang la nho nhat, tu cuoi den giua mang la lon nhat
	// in phan tu lan luot cuoi=>dau=>cuoi=>dau den giua mang.
	int dem = 0;
	int mid = n/2;
	while (dem < mid) {
			cout << a[n-1-dem] << " " << a[dem] << " ";
			dem++;
	}   
	if (n % 2 == 1) cout << a[mid];
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int* a = new int[n];
		nhapMangMotChieu(a, n);
		sapXepXenKe(a, n);
		cout << endl;
		delete[]a;
	}
	return 0;
}

