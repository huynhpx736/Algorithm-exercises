#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
struct HangHoa {
	int ma;
	string ten;
	string nhom;
	double giaMua;
	double giaBan;
	double loiNhuan;
};
void nhapThongTinHangHoa(HangHoa& hang) {
	cin.ignore();
	getline(cin, hang.ten);
	getline(cin, hang.nhom);
	cin >> hang.giaMua >> hang.giaBan;
	hang.loiNhuan = hang.giaBan - hang.giaMua;
}
void xuatThongTin(HangHoa hang) {
	cout << hang.ma << " " << hang.ten << " " << hang.nhom << " " << fixed << setprecision(2) << hang.loiNhuan;
}
void nhapDanhSachHangHoa(vector<HangHoa>& ds, int soLuong) {
	HangHoa temp;
	for (int i = 0; i < soLuong; i++) {
		nhapThongTinHangHoa(temp);
		ds.push_back(temp);
		ds[i].ma = i + 1;
	}
}
void sapXep(vector<HangHoa>& ds) {
	for (int i = 0; i < ds.size(); i++) {
		for (int j = i + 1; j < ds.size(); j++) {
			if (ds[i].loiNhuan < ds[j].loiNhuan) swap(ds[i], ds[j]);

		}
	}
}
void xuatDanhSachHangHoa(vector<HangHoa> ds) {
	for (int i = 0; i < ds.size(); i++) {
		xuatThongTin(ds[i]);
		cout << endl;
	}
}
int main() {
	int n;
	cin >> n;
	vector<HangHoa> danhSach;
	nhapDanhSachHangHoa(danhSach, n);
	sapXep(danhSach);
	xuatDanhSachHangHoa(danhSach);
	return 0;
}
