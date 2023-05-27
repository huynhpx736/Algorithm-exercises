#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define MAXLIST 100   // so phan tu toi da trong danh sach
#define TRUE 1
#define FALSE 0
using namespace std;
typedef struct list
{
	int n;
	int nodes[MAXLIST];
};
// Phep toan empty: kiem tra danh sach co bi rong khong
int empty(list plist)
{
	return(plist.n == 0 ? TRUE : FALSE);
}
// Phep toan  full: kiem tra danh sach bi day khong
int full(list plist)
{
	return(plist.n == MAXLIST ? TRUE : FALSE);
}
// Tao danh sach
void create_list(list &plist)
{ int i;
  printf("\nSo phan tu cua danh sach :");
  scanf("%d", &plist.n);
  for (i=0; i < plist.n; i++)
  { printf("List[%d] =", i+1);
    scanf("%d",&plist.nodes[i]);
  }
}
// Tac vu insert_item: chen nut co noi dung info vao vi tri i
// i==0 : them vao dau danh sach
// i==plist->n +1 : them vao cuoi danh sach
void insert_item(list &plist, int i, int info)
{
	int j;
	if(i < 0 || i > plist.n+1)
		printf("Vi tri chen khong phu hop.");
	else
		if(full(plist))
			printf("Danh sach bi day.");
		else
		{  if (i==0) i=1;
for(j = plist.n -1; j >= i-1; j--)
	plist.nodes[j+1] = plist.nodes[j];
plist.nodes[i-1] = info;
plist.n ++;
		}
}
// Tac vu delete_item: xoa nut tai vi tri i trong danh sach
void delete_item (list &plist, int i)
{
	int j;
	int temp;
	if(i <= 0 || i > plist.n)
		printf("Vi tri xoa khong phu hop.");
	else
		if(empty(plist))
			printf("Danh sach khong co phan tu.");
		else
		{
			for(j = i;  j< plist.n ; j++)
				plist.nodes[j-1] = plist.nodes[j];
			plist.n--;
		}
}
// Tac vu clearlist: xoa tat ca cac nut trong danh sach
void clearlist(list &plist)
{
	plist.n = 0;
}
// Tac vu traverse: duyet danh sach cac so nguyen
void traverse(struct list plist)
{
	int i;
	if(plist.n == 0)
	{
		printf("\n     Danh sach khong co phan tu");
		return;
	}
	for(i = 0; i < plist.n; i++)
		printf("%10d",  plist.nodes[i]);
}
/* Phep toan search: tim kiem tuyen tinh, neu khong tim thay ham nay tra
ve -1, neu tim thay ham nay tra ve vi tri tim thay */
int search_info(list plist, int info)
{
	int vitri = 0;
	while( vitri < plist.n && plist.nodes[vitri] != info  )
		vitri++;
	return(vitri==plist.n ? -1 : vitri+1);
}

int menu()
{ int chucnang;
       // clrscr();
	// menu chinh cua chuong trinh
	printf("\n\n CHUONG TRINH QUAN LY DANH SACH CAC SO \n");
	printf(" Cac chuc nang cua chuong trinh:\n");
	printf("       1: Nhap danh sach\n");
	printf("       2: Xem danh sach \n");
	printf("       3: Them mot so vao vi tri thu i\n");
	printf("       4: Xoa phan tu dau tien co tri info\n");
	printf("       5: Xoa toan bo danh sach\n");
	printf("       0: Ket thuc chuong trinh\n");
	printf("  Chuc nang ban chon: ");
	do
  	    scanf("%d", &chucnang);
	while (chucnang<0 || chucnang >5);
	return chucnang;
}
int main()
{
	struct list ds;
	int chucnang, vitri, info;
	char c;
	ds.n=0;
  do
  {
	 
	chucnang=menu();
		switch(chucnang)
		{
	case 1:
	{
	printf("\nNhap danh sach: ");
	create_list(ds);
	break;
	}
	case 2:
	{
	printf("\nDanh sach so: ");
	traverse(ds);
	getche();
	break;
	}
	case 3:
	{
	printf("\nVi tri them (1, 2, ...): ");
	scanf("%d", &vitri);
	printf("Gia tri: ");
	scanf("%d", &info);
	insert_item(ds, vitri, info);
	getche();
	break;
	}
	case 4:
	{
	printf("\nGia tri so can xoa: ");
	scanf("%d", &info);
	vitri = search_info(ds, info);
	if(vitri == -1)
	   printf("Khong co so %d trong danh sach",  info);
	else
	  delete_item(ds, vitri);
	getche();
	break;
	}
	case 5:
	{
	printf("\nBan co chac muon xoa hay khong (c/k):");
	c = toupper(getche());
	if( c == 'C')
	clearlist(ds);
	break;
	}
		}
	} while(chucnang != 0);
}

