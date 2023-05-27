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
	friend istream& operator>>(istream&, PhanSo&);
	friend ostream& operator<<(ostream&, PhanSo&);
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
ostream& operator<<(ostream& os, PhanSo&ps) {
	os << ps.tuSo << '/' << ps.mauSo;
	return os;
}
int main() {
	PhanSo p(1, 1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
