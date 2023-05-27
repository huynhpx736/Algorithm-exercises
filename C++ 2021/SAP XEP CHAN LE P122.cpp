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
void sapXepChanLe(int* a, int n) {
	sapXepMangMotChieu(a, n);
	// chia mang thanh 2 phan nua mang dau sap xep cho i le voi phan tu nho xep tru?c 
	// n?a mang sau sap xep cho i chan voi phan tu nho xep truoc
	int dem = 0;
	int mid = n/2;
	while (dem < mid) {
		if (n % 2 == 0) {
			cout << a[dem] << " " << a[dem + mid] << " ";
		}
		else cout << a[dem] << " " << a[dem + mid+1] << " ";
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
		sapXepChanLe(a, n);
		cout << endl;
		delete[]a;
	}
	return 0;
}

