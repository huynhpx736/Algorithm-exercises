 #include <iostream>
int r=0;
int main(){
int m,n;
std::cin>>m>>n;
int mt[m][n];
int k=0;
int i=0,j=0;
int l=0,t=0,r=n,b=m;
int flag=1;

while (k!=m*n){
    mt[i][j]=++k;
    if (flag==1) {
        if (j!=r-1) j++;
        else {
            flag=2;
            i++;
            r--;
        }
    }
    else if (flag==2){
        if (i!=b-1) i++;
        else {
            flag=3;
            j--;
            b--;
        }
    }
    else if (flag==3){
        if (j!=l) j--;
        else {
            flag=4;
            i--;
            l++;
        }
    }
    else {
        if (i!=t+1) i--;
        else {
            flag=1;
            j++;
            i=++t;
        }
    }
}
for (int i=0;i<m;i++){
    for (int j=0;j<n;j++)
        std::cout<<mt[i][j]<<" ";
    std::cout<<std::endl;   
}
system("pause");
return 0;
}
