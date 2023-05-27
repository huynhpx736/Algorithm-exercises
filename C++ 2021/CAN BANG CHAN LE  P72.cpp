//SO CAN BANG CHAN LE
#include<iostream>
#include<cmath>
using namespace std;
int soCanBangChanLe(int n) {
	int demChan = 0;
	int demLe = 0;
	int demChuSo = 0;
	while (n > 0) {
		int tem = n % 10;
		if (tem % 2 == 0) demChan++;
		else demLe++;
		demChuSo++;
		n /= 10;
	}
	if (demChuSo % 2 == 0 && demChan == demLe) return 1;
	return 0;
}
int main() {
	int n;
	cin >> n;
	int a = pow(10, n - 1);
	int b = pow(10, n);
	int dem = 0;
	for (int i = a; i < b; i++) {
		if (soCanBangChanLe(i)) {
			dem++;
			if (dem % 10 == 0) {
				cout << i << endl;
			}
			else cout << i << " ";
		}

	}
	return 0;
}
