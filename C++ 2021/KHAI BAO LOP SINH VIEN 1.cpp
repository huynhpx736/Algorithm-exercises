#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class SinhVien
{
private:
	string hoTen;
	string mssv = "B20DCCN001";
	string ngaySinh;
	string lop;
	float GPA;
public:
	void nhap();
	void xuat();
};


void SinhVien::nhap()
{
	getline(cin, hoTen);
	cin >> lop;
	cin >> ngaySinh;
	string NS = ngaySinh;
	if (NS.find('/') != 2) NS = '0' + NS;
	if (NS.find_last_of('/') != 5) NS.insert(NS.find_last_of('/') - 1, "0");
	ngaySinh = NS;
	cin >> GPA;
}

void SinhVien::xuat()
{
	cout << mssv << " ";
	cout << hoTen << " ";
	cout << lop << " ";
	cout << ngaySinh << " ";
	cout << setprecision(2) << fixed << GPA;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

