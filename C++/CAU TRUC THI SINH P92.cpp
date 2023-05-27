#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct ThiSinh {
    string hoTen;
    string ngaySinh;
    float diem1;
    float diem2;
    float diem3;
    float tongDiem;
};
void nhap(ThiSinh& a) {
    //cin.ignore();
    getline(cin, a.hoTen);
    //cin.ignore();
    cin >> a.ngaySinh;
    string ns = a.ngaySinh;
    if (ns.substr(0, ns.find('/')).length() < 2) ns = "0" + ns;
    if (ns.substr(0, ns.find_last_of('/')).length() < 5) ns.insert(ns.find_last_of('/')-1,"0");
    a.ngaySinh = ns;
    cin >> a.diem1;
    cin >> a.diem2;
    cin >> a.diem3;
    a.tongDiem = a.diem1 + a.diem2 + a.diem3;
}
void in(ThiSinh a) {
    cout << a.hoTen << " " << a.ngaySinh <<" "<< fixed<<setprecision(1)<<a.tongDiem;
}

int main() {
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
