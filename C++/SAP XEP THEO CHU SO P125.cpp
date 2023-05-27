#include<iostream> 
#include<algorithm>
#include<string>
using namespace std; 
bool check(int a, int b) {
	return to_string(a) + to_string(b) > to_string(b) + to_string(a);
} 
int main() {
	int t, n, * arr; 
	cin >> t; 
	while (t--)
	{
		cin >> n; arr = new int[n]; 
		for (int i = 0; i < n; i++) cin >> arr[i]; 
		sort(arr, arr + n, check); 
		for (int i = 0; i < n; i++) cout << arr[i]; 
		cout << endl; 
		delete[]arr;
	}
	return 0;
}
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void nhapMangMotChieu(vector<string>& a, int n) {
//	string s;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		a.push_back(s);
//	}
//}
//void xuatMangMotChieu(vector<string>a, int n) {
//	for (int i = 0; i < n; i++) {
//		cout << a[i];
//	}
//}
//void sapXepMangMotChieu(vector<string>& a, int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] + a[j] < a[j] + a[i]) {		// lua chon kieu xep cho a[i] va a[j]
//				swap(a[i], a[j]);
//			}
//		}
//	}
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		vector<string>a;
//		nhapMangMotChieu(a, n);
//		sapXepMangMotChieu(a, n);
//		xuatMangMotChieu(a, n);
//		cout << endl;
//	}
//	return 0;
//}
//



