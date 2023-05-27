#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct SinhVien {
	string maSV="N20DCCN001";
	string hoTen;
	string lop;
	string NgaySinh;
	double DiemGPA{};
};
void nhapThongTinSV(SinhVien& a) {
	//cin.ignore();
	getline(cin, a.hoTen);
	cin>>a.lop;
	cin >> a.NgaySinh;
	string A = a.NgaySinh;
	if (A.substr(0, A.find('/')).length() < 2) A = '0' + A;
	if (A.substr(A.find('/') + 1, A.find_last_of('/') - A.find('/') - 1).length() < 2) A.insert(A.find('/') + 1, "0", 0, 1);
	a.NgaySinh = A;
	cin >> a.DiemGPA;
}

void inThongTinSV(SinhVien a) {
	cout << a.maSV << ' ';
	cout << a.hoTen << ' ';
	cout << a.lop << ' ';
	cout << a.NgaySinh << ' ';
	//cout << ((a.NgaySinh2.ngay < 10) ? "0" : "") << a.NgaySinh2.ngay << '/';
	//cout << ((a.NgaySinh2.thang < 10) ? "0" : "") << a.NgaySinh2.thang << '/' << a.NgaySinh2.nam << ' ';
	cout << setprecision(2) <<fixed<<  a.DiemGPA ;
}
int main() {
	struct SinhVien a;
	nhapThongTinSV(a);
	inThongTinSV(a);
	return 0;
}
