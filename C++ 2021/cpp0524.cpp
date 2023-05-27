#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

struct SinhVien
{
    string mssv;
    string name;
    string lop;
    float diem1;
    float diem2;
    float diem3;
};

void nhap(SinhVien &ds)
{
    cin >> ds.mssv;
    cin.ignore();
    getline(cin, ds.name);
    cin >> ds.lop;
    cin >> ds.diem1; 
    cin >> ds.diem2;
    cin >> ds.diem3;
}

void sap_xep(SinhVien *ds, int n)
{
    for(int i = 0; i < n - 1 ; i++)
    {
        for(int j = 1; j < n; j++)
        if(ds[i].mssv > ds[j].mssv)
            {
                SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;   
            }
    }
}

void in_ds(SinhVien *ds, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        cout << ds[i].mssv << " "
        << ds[i].name << " " 
        << ds[i].lop << " " << 
        fixed << setprecision(1)<< ds[i].diem1 << " "
        << ds[i].diem2 << " "
        << ds[i]. diem3 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}