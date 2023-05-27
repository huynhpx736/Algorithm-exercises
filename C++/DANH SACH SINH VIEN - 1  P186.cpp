#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;
struct SinhVien {
    string maSV ;
    string hoTen;
    string lop;
    string ngaySinh;
    float DiemGPA;
};
void chuanHoaNgay(string& ngay) {
    if (ngay.substr(0, ngay.find('/')).length() < 2) ngay = "0" + ngay;
    if (ngay.substr(0, ngay.find_last_of('/')).length() < 5) ngay.insert(ngay.find_last_of('/') - 1, "0");
}
void nhapThongTinSV(SinhVien& a) {
    cin.ignore();
    getline(cin, a.hoTen);
    //cin.ignore();
    cin >> a.lop;
    cin >> a.ngaySinh;
    chuanHoaNgay(a.ngaySinh);
    cin >> a.DiemGPA;
}
void xuatThongTinSV(SinhVien a) {
    cout << a.maSV << " " << a.hoTen << " " << a.lop << " ";
    cout << a.ngaySinh << " " << fixed << setprecision(2) << a.DiemGPA;
}

string taoMa(int stt) {
    string temp = "B20DCCN000";
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
void nhap(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        nhapThongTinSV(ds[i]);
        ds[i].maSV = taoMa(i + 1);
    }
}
void in(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        xuatThongTinSV(ds[i]);
        cout << endl;
    }
}


int main() {
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
