#include<iostream>
#include<cmath>
using namespace std;
struct PhanSo {
	long long tu;
	long long mau;
};
long long UCLN(long long a, long long b) {
	if (a % b == 0) return b;
	else return UCLN(b, a % b);
}
void rutGonPhanSo(PhanSo& a) {
	long long ucln = UCLN(a.tu, a.mau);
	a.tu = a.tu / ucln;
	a.mau = a.mau / ucln;
}
PhanSo tongBacHaiPS(PhanSo a, PhanSo b) {
	rutGonPhanSo(a);
	rutGonPhanSo(b);
	PhanSo temp;
	temp.tu = pow(a.tu * b.mau + a.mau * b.tu, 2);
	temp.mau = pow(a.mau * b.mau, 2);
	rutGonPhanSo(temp);
	return temp;
}
PhanSo tichBaPs(PhanSo a, PhanSo b, PhanSo c) {
	PhanSo temp;
	temp.tu = a.tu * b.tu * c.tu;
	temp.mau = a.mau * b.mau * c.mau;
	rutGonPhanSo(temp);
	return temp;
}
void process(PhanSo a, PhanSo b) {
	cout << tongBacHaiPS(a, b).tu << '/' << tongBacHaiPS(a, b).mau << ' ';
	cout << tichBaPs(a, b, tongBacHaiPS(a, b)).tu << '/' << tichBaPs(a, b, tongBacHaiPS(a, b)).mau << endl;
}



int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
