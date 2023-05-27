#include<iostream>
#include<string>
using namespace std;

void chuanHoaNgay(string& ngay) {
    if (ngay.substr(0, ngay.find('/')).length() < 2) ngay = "0" + ngay;
    if (ngay.substr(0, ngay.find_last_of('/')).length() < 5) ngay.insert(ngay.find_last_of('/') - 1, "0");
}
int main(){
	string ns;
	cin>>ns;
	chuanHoaNgay(ns);
	cout<<ns;
	return 0;
}
