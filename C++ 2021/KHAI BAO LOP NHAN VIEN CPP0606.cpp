#include<iostream>
#include<string>

using namespace std;
class NhanVien {
private:
	string ma ="00001";
	string hoten;
	string gt;
	string ngaySinh;
	string diaChi;
	string maThue;
	string ngayKiHopDong;
public:
	void nhap();
	void xuat();
};
void NhanVien::nhap() {
	getline(cin, hoten);
	cin >> gt;
	cin >> ngaySinh;
	cin.ignore();
	getline(cin, diaChi);
	cin >> maThue;
	cin >> ngayKiHopDong;

}
void NhanVien::xuat() {
	cout << ma << " ";
	cout << hoten << " ";
	cout << gt << " " <<ngaySinh<<" "<< diaChi << " " << maThue << " " << ngayKiHopDong;
}
int main() {
	NhanVien a;
	a.nhap();
	a.xuat();
	return 0;
}
