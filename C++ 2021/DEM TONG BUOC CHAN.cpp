#include<iostream>
using namespace std;

int main() {

	int soNguoi;
	int buocChan;
	int tongBuocChan = 0;
	cin >> soNguoi;
	for (int i = 0; i < soNguoi; i++) {
		cin >> buocChan;
		tongBuocChan += buocChan;
	}
	cout << tongBuocChan;
	return 0;
}
