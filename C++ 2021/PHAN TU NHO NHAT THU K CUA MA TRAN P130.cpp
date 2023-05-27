//PHAN TU NHO NHAT THU K CUA MA TRAN  P130
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		vector<int>b;
		int n, k;
		cin >> n >> k;
		int a[100][100];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				b.push_back(a[i][j]);
			}
		}
		sort(b.begin(), b.end());
		cout << b[k - 1] << endl;
	}
	return 0;
}
