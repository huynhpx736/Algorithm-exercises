#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
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
	friend istream& operator>>(istream&, SinhVien&);
	friend ostream& operator<<(ostream&, SinhVien&);
};

istream& operator>>(istream& is,SinhVien&sv)
{
	getline(is, sv.hoTen);
	is >> sv.lop;
	is >> sv.ngaySinh;
	string NS = sv.ngaySinh;
	if (NS.find('/') != 2) NS = '0' + NS;
	if (NS.find_last_of('/') != 5) NS.insert(NS.find_last_of('/') - 1, "0");
	sv.ngaySinh = NS;
	is >> sv.GPA;
	return is;
}

ostream& operator<<(ostream& os,SinhVien &sv)
{
	os << sv.mssv << " ";
	os << sv.hoTen << " ";
	os << sv.lop << " ";
	os << sv.ngaySinh << " ";
	os << setprecision(2) << fixed << sv.GPA;
	return os;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
