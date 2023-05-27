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

int main() {
	struct PhanSo p;
	cout << UCLN(24, 36) << endl;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
