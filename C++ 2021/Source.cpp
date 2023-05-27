#include<iostream> 
#include<vector>
#include<string>
#include<fstream>
#include<set>
using namespace std;
struct KichThuoc
{
	float ngang, cao, day;
};
struct SanPham
{
	char ma[7];
	char ten[51];
	char hdh[30];
	char congNghe[51];
	bool voice;
	KichThuoc kichThuoc;
	int nam;
	char hang[21];
	char giaBan[15];

};
void xoaKhoangTrangThua(string& s)
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

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 32 && s[i + 1] == 32)
		{
			s.erase(i, 1);
			i--;
		}
	}
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


void upper(string& s)
{
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}
}
void upperFirst(string& s)
{
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i - 1] == 32)
			s[i] = toupper(s[i]);
	}
}
void lower(string& s)
{
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
}
void stringToChar(string s, char a[])
{
	for (int i = 0; i < s.size(); i++)
	{
		a[i] = s[i];
	}
}
void nhapDanhSachTv(SanPham& a, int t)
{
	int temp;
	string s;
	fstream file1("DSHH.txt", ios::out | ios::binary);
	for (int i = 0; i < t; i++)
	{
		cout << "-------------TV thu " << i + 1 << "----------------\n";
		cout << "Nhap ma : ";
		getline(cin, s);
		upper(s);
		xoaSpace(s);
		stringToChar(s, a.ma);
		cout << "Nhap ten : ";
		getline(cin, s);
		xoaKhoangTrangThua(s);
		lower(s);
		upperFirst(s);
		stringToChar(s, a.ten);
		cout << "Nhap hdh : ";
		getline(cin, s);
		lower(s);
		upperFirst(s);
		stringToChar(s, a.hdh);
		cout << "Nhap cong nghe hinh anh : ";
		getline(cin, s);
		upper(s);
		stringToChar(s, a.congNghe);
		cout << "Dieu khien bang giong noi (1/co,0/ko) : ";
		cin >> temp;
		if (temp == 1)
			a.voice == true;
		if (temp == 0)
			a.voice == false;
		cout << "Kich thuoc : \n";
		cout << "Ngang : ";
		cin >> a.kichThuoc.ngang;
		cout << "Cao : ";
		cin >> a.kichThuoc.cao;
		cout << "Day : ";
		cin >> a.kichThuoc.day;
		cout << "Nam ra mat : ";
		cin >> a.nam;
		cout << "Hang : ";
		getline(cin, s);
		upper(s);
		stringToChar(s, a.hang);
		cout << "Gia ban : ";
		cin >> a.giaBan;
		cin.ignore();
		file1.write((char*)(&a), sizeof(SanPham));
	}
	file1.close();
}
string voice(bool sp)
{
	if (sp == true)
		return "Co";
	return "Khong";
}
void xuat(SanPham sp)
{
	cout << endl;
	cout << "Ma tv : " << sp.ma << endl;
	cout << "Ten tv : " << sp.ten << endl;
	cout << "He dieu hah : " << sp.hdh << endl;
	cout << "Cong nghe hinh anh : " << sp.congNghe << endl;
	cout << "Dieu khien bang giong noi : " << voice(sp.voice) << endl;
	cout << "Kich thuoc : " << "ngang " << sp.kichThuoc.ngang << " cao " << sp.kichThuoc.cao << " day " << sp.kichThuoc.day << endl;
	cout << "Nam ra mat : " << sp.nam << endl;
	cout << "Hang : " << sp.hang << endl;
	cout << "Gia ban : " << sp.giaBan << endl;
	cout << endl;
}
void docFileVaXuat(SanPham a)
{
	fstream file1("DSHH.txt", ios::in | ios::binary);
	while (file1.read((char*)(&a), sizeof(SanPham)))
	{
		xuat(a);
	}
	file1.close();
}

void xoaNoiDung(SanPham a)
{
	string s;
	int t, temp;
	fstream file1("DSHH.txt", ios::out | ios::binary);
	remove("DSHH.txt");
	cout << "Nhap lai danh sach moi\n";
	cout << "Nhap so tv : ";
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++)
	{
		cout << "-------------TV thu " << i + 1 << "----------------\n";
		cout << "Nhap ma : ";
		getline(cin, s);
		upper(s);
		xoaSpace(s);
		stringToChar(s, a.ma);
		cout << "Nhap ten : ";
		getline(cin, s);
		xoaKhoangTrangThua(s);
		lower(s);
		upperFirst(s);
		stringToChar(s, a.ten);
		cout << "Nhap hdh : ";
		getline(cin, s);
		lower(s);
		upperFirst(s);
		stringToChar(s, a.hdh);
		cout << "Nhap cong nghe hinh anh : ";
		getline(cin, s);
		upper(s);
		stringToChar(s, a.congNghe);
		cout << "Dieu khien bang giong noi (1/co,0/ko) : ";
		cin >> temp;
		if (temp == 1)
			a.voice == true;
		if (temp == 0)
			a.voice == false;
		cout << "Kich thuoc : \n";
		cout << "Ngang : ";
		cin >> a.kichThuoc.ngang;
		cout << "Cao : ";
		cin >> a.kichThuoc.cao;
		cout << "Day : ";
		cin >> a.kichThuoc.day;
		cout << "Nam ra mat : ";
		cin >> a.nam;
		cin.ignore();
		cout << "Hang : ";
		getline(cin, s);
		upper(s);
		stringToChar(s, a.hang);
		cout << "Gia ban : ";
		cin >> a.giaBan;
		cin.ignore();
		file1.write((char*)(&a), sizeof(SanPham));
	}
	file1.close();
}
void themVaoCuoiFile(SanPham a)
{
	string s;
	int t, temp;
	fstream file1("DSHH.txt", ios::app | ios::binary);
	cout << "Nhap so tv : ";
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++)
	{
		cout << "-------------TV thu " << i + 1 << "----------------\n";
		cout << "Nhap ma : ";
		getline(cin, s);
		upper(s);
		xoaSpace(s);
		stringToChar(s, a.ma);
		cout << "Nhap ten : ";
		getline(cin, s);
		xoaKhoangTrangThua(s);
		lower(s);
		upperFirst(s);
		stringToChar(s, a.ten);
		cout << "Nhap hdh : ";
		getline(cin, s);
		lower(s);
		upperFirst(s);
		stringToChar(s, a.hdh);
		cout << "Nhap cong nghe hinh anh : ";
		getline(cin, s);
		upper(s);
		stringToChar(s, a.congNghe);
		cout << "Dieu khien bang giong noi (1/co,0/ko) : ";
		cin >> temp;
		if (temp == 1)
			a.voice == true;
		if (temp == 0)
			a.voice == false;
		cout << "Kich thuoc : \n";
		cout << "Ngang : ";
		cin >> a.kichThuoc.ngang;
		cout << "Cao : ";
		cin >> a.kichThuoc.cao;
		cout << "Day : ";
		cin >> a.kichThuoc.day;
		cout << "Nam ra mat : ";
		cin >> a.nam;
		cin.ignore();
		cout << "Hang : ";
		getline(cin, s);
		upper(s);
		stringToChar(s, a.hang);
		cout << "Gia ban : ";
		cin >> a.giaBan;
		cin.ignore();
		file1.write((char*)(&a), sizeof(SanPham));
	}
	file1.close();
}
void cauA(SanPham a)
{
	int luaChon;
	cout << "1.Xoa noi dung cu\n";
	cout << "2.Ghi them \n";
	cin >> luaChon;
	cin.ignore();
	if (luaChon == 1)
		xoaNoiDung(a);
	else if (luaChon == 2)
		themVaoCuoiFile(a);
}
void timTvTheoMa(SanPham a)
{
	vector<SanPham>vt;
	string s;
	cout << "Nhap ma can tim: ";
	getline(cin, s);
	upper(s);
	fstream file("DSHH.txt", ios::in | ios::binary);
	while (file.read((char*)(&a), sizeof(SanPham)))
	{
		vt.push_back(a);
	}
	file.close();
	int dem = 0;
	for (int i = 0; i < vt.size(); i++)
	{
		if (vt[i].ma == s)
		{
			xuat(vt[i]);
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co tv\n";
}
bool timTuTrongTen(string s, string s2)
{

	for (int i = 0; i < s.size() - 1; i++)
	{
		string temp;
		if (s[i] == s2[0])
		{
			for (int j = i; j < s.size(); j++)
			{
				temp += s[j];
				if (temp == s2)
					return true;
			}
		}
	}
	return false;
}
void timTvTheoTen(SanPham a)
{
	vector<SanPham>vt;
	string s;
	cout << "Nhap tu can tim: ";
	getline(cin, s);
	upperFirst(s);
	fstream file("DSHH.txt", ios::in | ios::binary);
	while (file.read((char*)(&a), sizeof(SanPham)))
	{
		vt.push_back(a);
	}
	file.close();
	int dem = 0;
	for (int i = 0; i < vt.size(); i++)
	{

		if (timTuTrongTen(vt[i].ten, s) == true)
		{
			xuat(vt[i]);
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co tv\n";
}
void xuatTvTheoVoice(SanPham a)
{
	int luaChon;
	vector<SanPham>vt;
	fstream file("DSHH.txt", ios::in | ios::binary);
	while (file.read((char*)(&a), sizeof(SanPham)))
	{
		vt.push_back(a);
	}
	file.close();
	do
	{
		cout << "1.Co tim kiem bang giong noi\n";
		cout << "2.Ko co tim kiem bang giong noi\n";
		cout << "Lua chon : ";
		cin >> luaChon;
	} while (luaChon != 1 && luaChon != 2);
	if (luaChon == 1)
	{
		int dem = 0;
		fstream file1("Dstivicogiongnoi.csv", ios::out);
		for (int i = 0; i < vt.size(); i++)
		{
			if (vt[i].voice == true)
			{
				dem++;
				file1.write((char*)(&vt.at(i)), sizeof(SanPham));
			}
		}
		file1.close();
		fstream file2("Dstivicogiongnoi.csv", ios::in);
		while (file2.read((char*)(&a), sizeof(SanPham)))
		{
			xuat(a);
		}
		file2.close();
		if (dem == 0)
			cout << "Khong co tv\n";
	}
	else if (luaChon == 2)
	{
		int dem = 0;
		fstream file1("Dstivikocogiongnoi.csv", ios::out);
		for (int i = 0; i < vt.size(); i++)
		{
			if (vt[i].voice == false)
			{
				dem++;
				file1.write((char*)(&vt.at(i)), sizeof(SanPham));
			}
		}
		file1.close();
		fstream file2("Dstivikocogiongnoi.csv", ios::in);
		while (file2.read((char*)(&a), sizeof(SanPham)))
		{
			xuat(a);
		}
		file2.close();
		if (dem == 0)
			cout << "Khong co tv\n";
	}
}
void xuatCacTvTheoNam(SanPham a)
{
	set<int> nam;
	vector<SanPham>vt;
	fstream file("DSHH.txt", ios::in | ios::binary);
	while (file.read((char*)(&a), sizeof(SanPham)))
	{
		vt.push_back(a);
		nam.insert(a.nam);
	}
	file.close();
	int t;
	cout << "Moi chon nam: \n";
	int dem2 = 0;
	vector<int> nam2;
	for (set<int>::iterator i=nam.begin();i!=nam.end();i++)
	{
		cout << dem2+1 << "." << *i << endl;
		dem2++;
		nam2.push_back(*i);
	}
	cout << "Nhap lua chon : ";
	cin >> t;
	cout << "---------Cac TV nam " << nam2[t - 1] << "----------------\n";
	for (int i = 0; i < vt.size(); i++)
	{
		if (vt[i].nam == nam2[t - 1])
			xuat(vt[i]);
	}
}
void timKiemTvTrongKhoang(SanPham a)
{

	vector<SanPham>vt;
	fstream file("DSHH.txt", ios::in | ios::binary);
	while (file.read((char*)(&a), sizeof(SanPham)))
	{
		vt.push_back(a);
	}
	file.close();
	int b, c;
	cout << "Nhap khoang can tim ";
	cout << "Tu: ";
	cin >> b;
	cout << "Den: ";
	cin >> c;
	int dem = 0;
	cout << "---------Cac TV trong khoag tu " << b << " den " << c << "----------------\n";
	for (int i = 0; i < vt.size(); i++)
	{
		if (stoll(vt[i].giaBan) < c && stoll(vt[i].giaBan) > b)
		{
			xuat(vt[i]);
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co tv trong khoang can tim\n";
}
void demSoLuongTvTheoHang(SanPham a)
{
	vector<SanPham>vt;
	fstream file("DSHH.txt", ios::in | ios::binary);
	while (file.read((char*)(&a), sizeof(SanPham)))
	{
		vt.push_back(a);
	}
	string s;
	int dem = 0;
	cout << "Nhap hang can tim: ";
	getline(cin, s);
	upperFirst(s);
	for (int i = 0; i < vt.size(); i++)
	{
		if (vt[i].hang == s)
		{
			xuat(vt[i]);
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co tv\n";
	else
		cout << "==>Co " << dem << " tv hang " << s << endl;

}
void sapXepTvMoiRaMat(SanPham a)
{
	vector<SanPham>vt;
	fstream file("DSHH.txt", ios::in | ios::binary);
	while (file.read((char*)(&a), sizeof(SanPham)))
	{
		vt.push_back(a);
	}
	cout << "--------------Danh sach tv moi ra mat -----------\n ";
	for (int i = 0; i < vt.size() - 1; i++)
	{
		for (int j = i + 1; j < vt.size(); j++)
		{
			if (vt[i].nam > vt[j].nam)
				swap(vt[i], vt[j]);
		}
	}
	for (int i = 0; i < vt.size(); i++)
	{
		xuat(vt[i]);
	}
	fstream file1("DSHH.txt", ios::out, ios::binary);
	for (int i = 0; i < vt.size(); i++)
	{
		file1.write((char*)(&vt.at(i)), sizeof(SanPham));
	}
	file1.close();
}
void sapTvTangDanTheoHang(SanPham a)
{
	vector<SanPham>vt;
	fstream file("DSHH.txt", ios::in | ios::binary);
	while (file.read((char*)(&a), sizeof(SanPham)))
	{
		vt.push_back(a);
	}
	file.close();
	cout << "--------------Danh sach tv theo hang-----------\n ";
	for (int i = 0; i < vt.size() - 1; i++)
	{
		for (int j = i + 1; j < vt.size(); j++)
		{
			if (vt[i].hang[0] > vt[j].hang[0])
			{
				swap(vt[i], vt[j]);
			}
			else if (vt[i].hang[0] == vt[j].hang[0])
			{
				for (int t = 0; t < max(strlen(vt[i].hang), strlen(vt[j].hang)); t++)
				{
					if (vt[i].hang[t] > vt[j].hang[t])
					{
						swap(vt[i], vt[j]);
						break;
					}
				}
			}
		}
	}
	for (int i = 0; i < vt.size() - 1; i++)
	{
		for (int j = i + 1; j < vt.size(); j++)
		{
			if (vt[i].hang == vt[j].hang)
				if (vt[i].giaBan > vt[j].giaBan)
					swap(vt[i], vt[j]);
		}
	}
	for (int i = 0; i < vt.size(); i++)
	{
		xuat(vt[i]);
	}
}
int main()
{
	SanPham a = {};
	vector<SanPham> sp;
	int luaChon;
	int t;
	//cout << "Nhap so tv: ";
	//cin >> t;
	//cin.ignore();
	//nhapDanhSachTv(a,t);
	do
	{
		cout << "------------------------------------------\n";
		cout << "1.Nhap thong tin\n";
		cout << "2.Doc file va xuat\n";
		cout << "3.Tim tv theo ma\n";
		cout << "4.Tim tv theo ten\n";
		cout << "5.Xuat tv theo chuc nang\n";
		cout << "6.Xuat tv theo nam ra mat\n";
		cout << "7.Tim tv trong khoang\n";
		cout << "8.Dem so tv theo hang \n";
		cout << "9.Sap xep tv moi len truoc\n";
		cout << "10.Sap xep tv tang dan theo hang\n";
		cout << "Lua chon: ";
		cin >> luaChon;
		cin.ignore();
		switch (luaChon)
		{
		case 1:
			cauA(a);
			break;
		case 2:
			cout << "--------------------------------\n";
			docFileVaXuat(a);
			break;
		case 3:
			cout << "--------------------------------\n";
			timTvTheoMa(a);
			break;
		case 4:
			cout << "--------------------------------\n";
			timTvTheoTen(a);
			break;
		case 5:
			cout << "--------------------------------\n";
			xuatTvTheoVoice(a);
			break;
		case 6:
			cout << "--------------------------------\n";
			xuatCacTvTheoNam(a);
			break;
		case 7:
			cout << "--------------------------------\n";
			timKiemTvTrongKhoang(a);
			break;
		case 8:
			cout << "--------------------------------\n";
			demSoLuongTvTheoHang(a);
			break;
		case 9:
			cout << "--------------------------------\n";
			sapXepTvMoiRaMat(a);
			break;
		case 10:
			sapTvTangDanTheoHang(a);
		default:
			break;
		}
	} while (luaChon != 0);

}