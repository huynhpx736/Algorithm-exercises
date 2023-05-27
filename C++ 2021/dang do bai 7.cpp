#include<iostream>
#include<cmath>
using namespace std;
int ktSNT(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;	
	}	
	return 1;
}
void uocNT(int a,int b){
	if (a>b){
		int tem=a;
		a=b;
		b=tem;
	}
for (int i=a;i<=b;i++){
	if (ktSNT(i)) cout<<i<<" ";
}
cout<<endl;
}

int main(){
	int test;
	cin>>test;
	while(test>0){
		int a,b;
		cin>>a>>b;
		uocNT(a,b);
	}
	return 0;
}
