
#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<vector>
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
string taoMaNhanVien(int stt) {
    string temp = "00000";
    string ma;
    int i = stt;
    int soChuSo = 0;
    while (i > 0) {
        soChuSo++;
        i /= 10;
    }
    if (stt < pow(10, soChuSo)) ma = temp.replace(temp.length() - soChuSo, soChuSo, to_string(stt));
    return ma;
}
void nhap(NhanVien& a) {
    cin.ignore();
    getline(cin, a.hoTen);
    cin >> a.gioiTinh;
    cin >> a.ngaySinh;
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
void inds(NhanVien ds[50], int n) {
    for (int i = 0; i < n; i++) {
        ds[i].maNV = taoMaNhanVien(i + 1);
        in(ds[i]);
        cout << endl;
    }
}

int main() {
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}
