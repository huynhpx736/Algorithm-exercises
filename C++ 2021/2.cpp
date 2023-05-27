#include<iostream>
#include<vector>
#include<regex>
using namespace std;
struct Sach
{
	string maSach;
	string tenSach;
	string tacGia;
	string loaiSach;
	int nam{};
	int gia{};
	int soLuong{};
};
bool check(string s)
{
	regex pattern("[a-zA-Z\\s]+");
	if (regex_match(s, pattern) == false)
		return false;
	return true;
}
bool checkSo(string s)
{
	regex pattern("[0-9]+");
	if (regex_match(s, pattern))
		return true;
	return false;
}
bool checkMa(string s)
{
	regex pattern("BOOK[0-9]{3}");
	if (regex_match(s, pattern))
		return true;
	return false;
}
bool checkLoai(string s)
{
	regex pattern("(TN|XH)");
	if (regex_match(s, pattern))
		return true;
	return false;
}
void xoaSpace(string& s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == '32')
		{
			s.erase(i, 1);
			i--;
		}
	}
}
void chuanHoa(string& s)
{
	do
	{
		if (s[0] == 32)
			s.erase(0, 1);

	} while (s[0] == 32);
	do
	{
		if (s[s.size() - 1] == 32)
			s.erase(s.size() - 1, 1);

	} while (s[s.size() - 1] == 32);

	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == 32 && s[i + 1] == 32)
		{
			s.erase(i, 1);
			i--;
		}
	}
}
void upper(string& s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}
}
void lower(string& s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
}
void upperFirst(string& s)
{
	s[0] = toupper(s[0]);
	for (size_t i = 1; i < s.size(); i++)
	{
		if (s[i - 1] == 32)
			s[i] = toupper(s[i]);
	}
}
string taoMaSach(int i)
{
	string s = "BOOK";
	string s2;
	

		if (i < 10)
			s2 = s + "00" + to_string(i);
		else if (i >= 10 && i <= 99)
			s2 = s + "0" + to_string(i);
		else if (i >= 100 && i <= 999)
			s2 = s + to_string(i);
	
		return s2;

}
void nhap(Sach& a,int &demMa)
{
	string s;
	a.maSach = taoMaSach(demMa);
	demMa++;
	cout << "Nhap ten sach : ";
	do {
		getline(cin, a.tenSach);
		chuanHoa(a.tenSach);
		lower(a.tenSach);
		upperFirst(a.tenSach);
	} while (check(a.tenSach) == false);
	cout << "Nhap tac gia : ";
	do{
	getline(cin, a.tacGia);
	chuanHoa(a.tacGia);
	lower(a.tacGia);
	upperFirst(a.tacGia);
	} while (check(a.tacGia) == false);
	cout << "Nhap loai sach (TN-Tu Nhien;XH-Xa Hoi) : ";
	do{
	getline(cin, a.loaiSach);
	xoaSpace(a.loaiSach);
	upper(a.loaiSach);
	} while (checkLoai(a.loaiSach) == false);
	cout << "Nhap nam xuat ban sach : ";
	do
	{
	getline(cin, s);
	a.nam = atoi(s.c_str());
	} while (checkSo(s)==false||a.nam<0);
	cout << "Nhap gia tien : ";
	do
	{
		getline(cin, s);
		a.gia = atoi(s.c_str());
	} while (checkSo(s) == false || a.gia < 0);
	cout << "Nhap so luong : ";
	do
	{
		getline(cin, s);
		a.soLuong = atoi(s.c_str());
	} while (checkSo(s) == false || a.soLuong < 0);
	cout << endl;


}
void xuat(Sach a)
{
	cout << "Ma sach : " << a.maSach << endl;
	cout << "Ten sach : " << a.tenSach << endl;
	cout << "Tac gia : " << a.tacGia << endl;
	cout << "Loai sach : ";
	if (a.loaiSach == "TN")
		cout << "Tu Nhien" << endl;
	else cout << "Xa Hoi" << endl;
	cout << "Nam xuat ban : " << a.nam<<endl;
	cout << "Gia tien : " << a.gia << endl;
	cout << "So luong : " << a.soLuong << endl;
	cout << endl;
}
void tinhTongTien(vector<Sach> sach)
{
	cout << "-----------------Tong Tien--------------------\n";
	int tuNhien=0;
	int xaHoi=0;
	for (size_t i = 0; i < sach.size(); i++)
	{
		if (sach[i].loaiSach == "TN")
			tuNhien += sach[i].gia*sach[i].soLuong;
		if (sach[i].loaiSach == "XH")
			xaHoi += sach[i].gia * sach[i].soLuong;
	}
	cout << "Tong tien sach tu nhien la : " << tuNhien << endl;
	cout << "Tong tien sach xa hoi la : " << xaHoi << endl;
	cout << "=====>Tong cong : " << tuNhien + xaHoi << endl;

}
bool tang(int a, int b)
{
	return a > b;
}
bool giam(int a, int b)
{
	return a < b;
}
void sapXep(vector<Sach> &sach,bool (*phepTinh)(int ,int ))
{
	int a, b;
	for (size_t i = 0; i <  sach.size()-1; i++)
	{
		a = atoi(sach[i].maSach.substr(sach[i].maSach.size() - 3).c_str());
		for (size_t j = i+1; j < sach.size(); j++)
		{
			b = atoi(sach[j].maSach.substr(sach[j].maSach.size() - 3).c_str());
			if (phepTinh(a,b))
				swap(sach[i], sach[j]);
		}
	}
	cout << "-----------Danh Sach----------\n";
	for (size_t i = 0; i < sach.size(); i++)
	{
		xuat(sach[i]);
		cout << endl;
	}
}
void timSachTheoTen(vector<Sach> sach)
{
	string s;
	int dem = 0;
	
	cout << "Nhap ten sach can tim : ";
	do
	{
	getline(cin, s);
	chuanHoa(s);
	lower(s);
	upperFirst(s);
	} while (check(s) == false);
	cout << "--------------Sach Can Tim-----------------\n";
	for (size_t i = 0; i < sach.size(); i++)
	{
		if (sach[i].tenSach == s)
		{
			xuat(sach[i]);
			cout << endl;
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong tim thay sach\n";
}
void timSachTheoNam(vector<Sach> sach)
{
	int n,dem=0;
	string s;
	cout << "Nhap nam can tim : ";
	do {
		getline(cin, s);
		n = atoi(s.c_str());
	} while (checkSo(s) == false);
	cout << "------Danh Sach Sach Truoc Nam " << n << " la : \n";
	for (size_t i = 0; i < sach.size(); i++)
	{
		if (sach[i].nam < n)
		{
			xuat(sach[i]);
			dem++;
			cout << endl;
		}
		
	}
	if (dem == 0)
		cout << "Khong co sach nao\n";
}
void demSach(vector <Sach> sach)
{
	int dem = 0;
	int n;
	string s;
	cout << "Nhap gia tri can tim : ";
	do {
		getline(cin, s);
		n = atoi(s.c_str());
	} while (checkSo(s) == false);
	for (size_t i = 0; i < sach.size(); i++)
	{
		if (sach[i].gia > n)
			dem++;
	}
	cout << "====>Co " << dem << " sach gia cao hon " << n << endl;
	for (size_t i = 0; i < sach.size(); i++)
	{
		if (sach[i].gia > n)
			xuat(sach[i]);
		cout << endl;
	}
} 
void xuatSachTheoLoai(vector<Sach>sach)
{
	int n;
	cout << "1.Xuat sach tu nhien\n2.Xuat sach xa hoi\nLuaChon: ";
	cin >> n;
	cin.ignore();
	if (n == 1)
	{
		cout << "----------Danh Sach Sach Tu Nhien----------\n";
		for (size_t i = 0; i < sach.size(); i++)
		{
			if (sach[i].loaiSach == "TN")
				xuat(sach[i]);
			cout << endl;
		}
	}
	if (n == 2)
	{
		cout << "----------Danh Sach Sach Xa Hoi----------\n";
		for (size_t i = 0; i < sach.size(); i++)
		{
			if (sach[i].loaiSach == "XH")
				xuat(sach[i]);
			cout << endl;
		}
	}
}
int main()
{
	int t,luaChon,luaChon2;
	int demMa = 1;
	vector<Sach> sach;
	Sach a;
	cout << "Nhap so luong sach : ";
	cin >> t;
	cin.ignore();
	for (size_t i = 0; i < t; i++)
	{
		nhap(a,demMa);
		sach.push_back(a);
	}
	do
	{
		cout << "1.Them 1 cuon sach\n2.Xuat danh sach\n3.Tinh tong tien\n4.Sap xep cac cuon theo ma sach\n5.Tim sach theo ten sach\n6.Xuat cac cuon sach co nam xuat ban truoc nam X\n7.Dem so luong sach co gia tri lon hon N\n8.Xuat cac cuon sach theo loai\n";
		cout << "Lua chon : ";
		cin >> luaChon;
		cin.ignore();
		switch (luaChon)
		{
		case 1:
			nhap(a,demMa);
			sach.push_back(a);
			break;
		case 2:
			cout << "------------------DANH SACH-------------------\n";
			for (size_t i = 0; i < sach.size(); i++)
			{
				xuat(sach.at(i));
			}
			cout << "----------------------------------------------\n";
			break;
		case 3:
			tinhTongTien(sach);
			cout << "----------------------------------------------\n";
			break;
		case 4:
			cout << "1.Sap xep tang dan\n2.Sap xep giam dan\n";
			cout << "Lua chon: ";
			do
			{
			cin >> luaChon2;
			cin.ignore();
			switch (luaChon2)
			{case 1:
				sapXep(sach, tang);
				break;
			case 2:
				sapXep(sach, giam);
				break;
			default:
				cout << "Nhap sai !!!!!!!!!\n";
				break;
			}
			} while (luaChon2!=1&&luaChon2!=2);
			cout << "----------------------------------------------\n";
			break;
		case 5:
			timSachTheoTen(sach);
			cout << "----------------------------------------------\n";
			break;
		case 6:
			timSachTheoNam(sach);
			cout << "----------------------------------------------\n";
			break;
		case 7: 
			demSach(sach);
			cout << "----------------------------------------------\n";
			break;
		case 8:
			xuatSachTheoLoai(sach);
			cout << "----------------------------------------------\n";
			break;
		case 0:
			cout << "THOAT!!!!!!!!!!!!!\n";
			break;
		default:
			cout << "Nhap lai : ";
			break;
		}
	} while (luaChon!=0);
}