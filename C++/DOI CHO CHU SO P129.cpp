#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string timBeNhat(string s)
{
    int len = s.length();
    int index = -1;
   //di tu phai qua tim phan tu dau tien trong s nho hon phan tu dung truoc no
    for (int i = len - 2; i >= 0; i--) {
        if (s[i] > s[i + 1])
        {
            index = i;
            break;
        }
    }
   //neu index =-1 tuc la chuoi da dc sap xeo tang, return -1
    if (index == -1)    return "-1";

  
    //tim so lon nhat tu phai qua ma nho hon s[index]
    int soNhoNhatHonLonNhat = -1;
    for (int i = len - 1; i > index; i--) {
        if (s[i] < s[index]) {
            if (soNhoNhatHonLonNhat == -1)
                soNhoNhatHonLonNhat = i;
            else if (s[i] >= s[soNhoNhatHonLonNhat])
                soNhoNhatHonLonNhat = i;
        }
    }
    
    // Swap 2 gia tri
    if (soNhoNhatHonLonNhat != -1)
    {
        swap(s[index], s[soNhoNhatHonLonNhat]);
        //neu tim duoc s co so 0 o dau thi khong hop le 100 =>010 
        if (s[0] == '0') return "-1";
        return s;
    }

    return "-1";
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout<<timBeNhat(s)<<endl;
	}
	return 0;
}


