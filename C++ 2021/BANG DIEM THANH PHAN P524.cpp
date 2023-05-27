#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<cstring>
using namespace std;
struct SinhVien {
    string maSV;
    string hoTen;
    string lop;
    float diem1, diem2, diem3;
};

void nhap(SinhVien& a) {
    cin >> a.maSV;
    cin.ignore();
    getline(cin, a.hoTen);
    cin >> a.lop;
    cin >> a.diem1 >> a.diem2 >> a.diem3;
}
void xuatThongTinSV(SinhVien a) {
    cout << a.maSV << " " << a.hoTen << " " << a.lop << " ";
    cout << fixed << setprecision(1) << a.diem1 << " " << a.diem2 << " " << a.diem3;
}

void sap_xep(SinhVien* ds, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ds[i].maSV.c_str(), ds[j].maSV.c_str()) > 0) {
                SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}
void in_ds(SinhVien* ds, int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " ";
        xuatThongTinSV(ds[i]);
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    struct SinhVien* ds = new SinhVien[n];
    for (int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}
