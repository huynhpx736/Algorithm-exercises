#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
void nhapMangMotChieu(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void xuatMang(int* a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void day0XuongCuoiDay(int a[], int n)
{
    // dem so phan tu khac 0
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != 0)
        // day phan tu khac 0 len dau day
            a[count++] = a[i];
    // cac phan tu con lai cho no =0
    while (count < n)
        a[count++] = 0;
}

//ham sap xep lai theo de
void nhanDoiCapSoBangNhau(int a[], int n)
{
    // mang 1 phan tu thi return 
    if (n == 1)
        return;

    // duyet mang
    for (int i = 0; i < n - 1; i++) {

        if ((a[i] != 0) && (a[i] == a[i + 1])) {      
            a[i] = 2 * a[i];       
            a[i + 1] = 0;
            // nhay buoc qua a[i+1] vi da duyet roi
            i++;
        }
    }
    day0XuongCuoiDay(a, n);
    xuatMang(a, n);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int* a = new int[n];
        nhapMangMotChieu(a, n);
        nhanDoiCapSoBangNhau(a, n);
        cout << endl;
        delete[]a;
    }
    return 0;
}

// CACH PHIA DUOI BI SAI KET QUA (CHUA RO NGUYEN NHAN)

/*
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
void nhapMangMotChieu(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void nhanDoiCapSoBangNhau(int* a, int n) {
	int demSo0 = 0;
	// neu a[i+1] va a[i] thoa dieu kien thi a[i] nhan 2, a[i+1]=0 ,dem so so 0 trong mang 
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) demSo0++;
		if (a[i + 1] == a[i] && a[i + 1] != 0) {
			a[i] = 2 * a[i];
			a[i + 1] = 0;
		}
	}
	//neu phan tu mang khac 0 in ra man hinh
	for (int i = 0; i < n; i++) {
		if (a[i] != 0) cout << a[i] << " ";
	}
	// in ra so so 0 trong mang
	for (int i = 0; i < demSo0; i++) {
		cout << 0 << " ";
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int* a = new int[n];
		nhapMangMotChieu(a, n);
		nhanDoiCapSoBangNhau(a, n);
		cout << endl;
		delete[]a;
	}
	return 0;
}
*/
