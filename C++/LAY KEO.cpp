#include<iostream>
using namespace std;
int giaiThua(int n) {
	int tich = 1;
	for (int i = 1; i <= n; i++) {
		tich *= i;
	}
	return tich;
}

int main() {

	//so keo lay ra duoc chinh la so hoan vi cua cac lan lay keo
	int soKeo;
	cin >> soKeo;
	cout << giaiThua(soKeo);
	return 0;
}
