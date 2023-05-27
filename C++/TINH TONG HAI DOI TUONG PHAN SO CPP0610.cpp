
#include<iostream>
#include<string>
#include<ostream>
#include<fstream>

using namespace std;
long long ucln(long long a, long long b) {
	if (a % b == 0) return b;
	else return ucln(b, a % b);
}
class PhanSo {
private:
	long long tuSo;
	long long mauSo;
public:
	PhanSo(long long ts, long long ms);
	friend istream& operator>>(istream&  is, PhanSo&ps);
	friend ostream& operator<<(ostream& os, PhanSo ps);

	friend PhanSo operator+(PhanSo ps1,PhanSo ps2);
	void rutgon();
};
PhanSo::PhanSo(long long ts, long long ms) {
	tuSo = ts;
	mauSo = ms;
}
istream& operator>>(istream& is, PhanSo& ps) {
	is >> ps.tuSo;
	is >> ps.mauSo;
	return is;
}
void PhanSo::rutgon() {
	long long u = ucln(tuSo, mauSo);
	tuSo = tuSo / u;
	mauSo = mauSo / u;
}

ostream& operator<<(ostream &os, PhanSo ps) {
	os << ps.tuSo << '/' << ps.mauSo;
	return os;
}


PhanSo operator+(PhanSo ps1, PhanSo ps2) {
	/*ps1.rutgon();
	ps2.rutgon();*/
	PhanSo temp(1, 1);
	temp.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
	temp.mauSo = ps1.mauSo * ps2.mauSo;
	temp.rutgon();
	return temp;
}
int main() {
	PhanSo p(1, 1), q(1, 1);
	cin >> p >> q;
    cout << p + q;
	return 0;
}
