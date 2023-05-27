#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct SinhVien {
    string maSV = "B20DCCN001";
    string hoTen;
    string lop;
    string ngaySinh;
    float DiemGPA;
};
void nhap(SinhVien& a) {
    //cin.ignore();
    getline(cin, a.hoTen);
    //cin.ignore();
    cin >> a.lop;
    cin >> a.ngaySinh;
    string ns = a.ngaySinh;
    if (ns.substr(0, ns.find('/')).length() < 2) ns = "0" + ns;
    if (ns.substr(0, ns.find_last_of('/')).length() < 5) ns.insert(ns.find_last_of('/') - 1, "0");
    a.ngaySinh = ns;
    cin >> a.DiemGPA;
}
void in(SinhVien a) {
    cout << a.maSV << " " << a.hoTen << " " << a.lop <<" "<< a.ngaySinh << " " << fixed << setprecision(2) << a.DiemGPA;
}

int main() {
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
