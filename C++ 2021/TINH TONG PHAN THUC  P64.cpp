#include<stdio.h> 
int main() {
	int n; 
	scanf("%d", &n);
	double tong = 0;
	for (int i = 1; i <= n; i++) {
		tong = tong + (double)1 / i;
	}
	printf("%0.4lf", tong);
	return 0;
}
