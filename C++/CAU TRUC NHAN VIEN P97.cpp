#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct NhanVien {
    string maNV;
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKiHD;

};
void chuanHoaNgay(string& ngay) {
    if (ngay.substr(0, ngay.find('/')).length() < 2) ngay = "0" + ngay;
    if (ngay.substr(0, ngay.find_last_of('/')).length() < 5) ngay.insert(ngay.find_last_of('/') - 1, "0");
}
void nhap(NhanVien& a) {
    a.maNV = "00001";
    //cin.ignore();
    getline(cin, a.hoTen);
    cin >> a.gioiTinh;
    cin >> a.ngaySinh;
    string ns = a.ngaySinh;
    chuanHoaNgay(a.ngaySinh);
    cin.ignore();
    getline(cin, a.diaChi);
    cin >> a.maSoThue;
    cin >> a.ngayKiHD;
    chuanHoaNgay(a.ngayKiHD);
}
void in(NhanVien a) {
    cout << a.maNV << " " << a.hoTen << " " << a.gioiTinh << " ";
    cout << a.ngaySinh << " " << a.diaChi << " " << a.maSoThue << " " << a.ngayKiHD;
}

int main() {
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
