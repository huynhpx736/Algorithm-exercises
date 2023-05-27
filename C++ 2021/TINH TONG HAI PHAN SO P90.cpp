#include<iostream>
using namespace std;
struct PhanSo {
	long long tuSo;
	long long mauSo;
};
long long UCLN(long long a, long long b) {
	if (a % b == 0) return b;
	else return UCLN(b, a % b);
}

void nhap(PhanSo& p) {
	cin >> p.tuSo >> p.mauSo;
}
void rutgon(PhanSo& p) {
	long long uoc = UCLN(p.tuSo, p.mauSo);
	p.tuSo = p.tuSo / uoc;
	p.mauSo = p.mauSo / uoc;
}
void in(PhanSo p) {
	cout << p.tuSo << '/' << p.mauSo;
}
PhanSo tong(PhanSo p, PhanSo q) {
	rutgon(p);
	rutgon(q);
	PhanSo tem;
	tem.tuSo = p.tuSo * q.mauSo + q.tuSo * p.mauSo;
	tem.mauSo = p.mauSo * q.mauSo;
	rutgon(tem);
	return tem;
}

int main() {
	struct PhanSo p, q;
	nhap(p); nhap(q);
	PhanSo t = tong(p, q);
	in(t);
	return 0;
}
