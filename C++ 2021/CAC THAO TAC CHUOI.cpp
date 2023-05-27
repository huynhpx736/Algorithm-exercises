//CAC THAO TAC CHUOI
#include <iostream>
#include <vector>
#include <string>
using namespace std;				//	FONT FIRACODE
void chuanHoa(string &s) {
	while (s[0] == ' ') {
		s.erase(s.begin());
	}
	while (s[s.length() - 1] == ' ') {
		s.erase(s.begin() + s.length() - 1);
	}
	for (int i = 0; i < s.length() - 1; ++i) {
		if (s[i] == ' ' && s[i + 1] == ' ') {
			s.erase(s.begin() + i);
			i--;
		}
	}
}
void tachTu(string str, vector<string> &s)
{
	string word = "";
	for (auto x : str)// for(int i=0;i<s.length()-1;++i)
	{
		if (x == ' ')		//x=s[i];
		{
			s.push_back(word);
			word = "";
		}
		else {
			word = word + x;
		}
	}
	s.push_back(word);
}

int main() {
	string a;
	getline(cin, a);
	vector<string>s;
	chuanHoa(a);
	tachTu(a, s);
	cout << s.size() << endl;
	for (auto x : s) {		//for(int i=0;i<s.size()-1;++i)
		cout << x << endl;
	}
	return 0;
}


/*
#include<iostream>
using namespace std;
#include<string>
#include<cstring>
#include<vector>




string chuanHoaStringThuong(string s)
{
	int length = s.length();
	for (int i = 0; i < length; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] + 32;
		}
	}
	return s;
}





string chuanHoaStringHoa(string s)
{
	int length = s.length();
	for (int i = 0; i < length; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return s;
}

string xoaKhoangTrangThua(string s)
{
	do
	{
		if (s[0] == 32)
		{
			s.erase(0, 1);  
		}
	} while (s[0] == 32);

	do {
		if (s[s.length() - 1] == 32)
		{
			s.erase(s.length() - 1, 1);
		}
	} while (s[s.length() - 1] == 32);
	
	for (int i = 1; i < s.length() - 1; i++)
	{
		if (s[i] == 32 && s[i + 1] == 32)
		{
			s.erase(i, 1);
			i--;
		}
	}


	return s;

}

string xoaKhoangTrang(string s)
{
	do
	{
		if (s[0] == 32)
		{
			s.erase(0, 1);
		}
	} while (s[0] == 32);

	do {
		if (s[s.length() - 1] == 32)
		{
			s.erase(s.length() - 1, 1);
		}
	} while (s[s.length() - 1] == 32);

	for (int i = 1; i < s.length() - 1; i++)
	{
		if (s[i] == 32 )
		{
			s.erase(i, 1);
			i--;
		}
	}


	return s;

}

string chuanHoaChuoiHoTen(string s)
{
	string temp = s;
	temp = xoaKhoangTrangThua(temp);
	temp = chuanHoaStringThuong(temp);
	temp[0] = temp[0] - 32;
	int length = temp.length();
	for (int i = 1; i < length - 1; i++)
	{
		if (temp[i] == 32)
		{
			temp[i + 1] = temp[i + 1] - 32;
		}
	}
	return temp;
}


int demTuTrongString(string s)
{
	int dem = 0;
	int length = s.length();
	if (length == 0)
	{
		return 0;
	}
	else if (s[0] != 32)
	{
		dem = 1;
	}
	
	for (int i = 0; i < length -1; i++)
	{
		if (s[i] == 32 && s[i + 1] != 32)
		{
			++dem;
		}
	}
	return dem;
}



void xuatCacTuTrenNhieuDong(string s)
{
	if (s.length() == 0)
	{
		return;
	}
	s = xoaKhoangTrangThua(s);
	vector<string> arrString;

	// ý tu?ng làm sao có th? b? các t? vào m?ng ( l?p qua m?ng string ) 
	// n?u g?p 1 kí t? thì b?c d?u n?i chu?i
	
	string temp;
	int i = 0;
	int dem = 0;
	while (true)
	{
		if ( s[i] == 32 ) 
		{
			arrString.push_back(temp);
			temp = "";
			i++;
		}
		else if (s[i] == '\0')
		{
			arrString.push_back(temp);
			
			break;
		}
		temp = temp + s[i];
		i++;	
	}
	for (int i = 0; i < arrString.size(); i++)
	{
		cout << arrString.at(i) << endl;
	}
}



void xuatChuDaiNhat(string s)
{
	if (s.length() == 0)
	{
		cout << "\nChuoi rong!";
		return;
	}
	s = xoaKhoangTrangThua(s);
	int indexString = 0;
	string temp;
	vector<string> arrString;
	vector<int> arrLengthString;
	int max;

	while (true)
	{
		if (s[indexString] == 32)
		{
			arrLengthString.push_back(temp.length());
			arrString.push_back(temp);
			temp = "";
			++indexString;
		}
		else if (s[indexString] == '\0')
		{
			arrLengthString.push_back(temp.length());
			arrString.push_back(temp);
			break;
		}
		temp = temp + s[indexString];
		++indexString;
	}
	max = arrLengthString.at(0);
	for (int i = 1; i < arrLengthString.size(); i++)
	{
		if (max < arrLengthString.at(i))
		{
			max = arrLengthString.at(i);
		}
	}
	cout << "\nDo dai cua tu dai nhat la: "<<max<<endl;

	for (int i = 0; i < arrLengthString.size(); i++)
	{
		if (max == arrLengthString.at(i))
		{
			cout << arrString.at(i) << endl;
		}
	}

}
/*
