#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct Nguoi
{
	string hoTen;
	string ngaySinh;
};

string chuanHoaNgayThang(string& s) {
	if (s.find('/') != 2) s = '0' + s;
	if (s.find_last_of('/') != 5) s.insert(s.find_last_of('/') - 1, "0");
	return s;
}

void nhapNguoi(Nguoi &x) {
	cin >> x.hoTen;
	cin >> x.ngaySinh;
	chuanHoaNgayThang(x.ngaySinh);
}

void nhapds(Nguoi ds[],int n) {
	for (int i = 0; i <n; i++) {
		nhapNguoi(ds[i]);
	}
}

void HoanVi(Nguoi& x, Nguoi& y)
{
	Nguoi tam;
	tam = x;
	x = y;
	y = tam;
}

int tachNgay(string s) {
	 string nam, thang, ngay,temp;
	 nam = s.substr(6, 4);
	 thang = s.substr(3, 2);
	 ngay = s.substr(0, 2);
	 temp = nam + thang + ngay;
	 int val = atoi(temp.c_str());
	//return temp;
	 return val;
}

void treNhatGiaNhat(Nguoi ds[],int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int val1 = tachNgay(ds[i].ngaySinh); //char* ch1 = (char*)val1.c_str();
			int val2 = tachNgay(ds[j].ngaySinh); //char* ch2 = (char*)val2.c_str();
			//int check = strcmp(ch1, ch2);
			if (val1>val2)
			{
				HoanVi(ds[i], ds[j]);
			}
		}
	}
	cout << ds[n-1].hoTen << endl;
	cout << ds[0].hoTen;
}
int main() {
	Nguoi ds[100];
	int n;
	cin >> n;
	nhapds(ds,n);
	treNhatGiaNhat(ds,n);
	return 0;
}
