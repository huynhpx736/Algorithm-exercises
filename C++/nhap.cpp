#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include<string>
#include <unistd.h>  
//using namespace std;

void intro() {
	char s[50];
	char s1[50] = "ten cursh cua mn nhe"; // ph?n n�y m?i ngu?i c� th? code l?i cho ph� h?p v?i � c?a m�nh nh�.
	printf("Nhap ten crush cua ban: \n");
	gets(s);
	if(strcmp(s,s1) !=0) {
		printf("May nhap sai ten crush roi kia, nhap lai di: \n");
		scanf("%s", s);
	}
	printf("\n");
	int i=0;
	for( i= 10; i<= 100; i=i+10) {
		printf("Dang xu ly: %d%% \n", i);
		sleep(1);
	}
	
}
int main(void)
{
	intro();
	char *line_buf = NULL;
	size_t line_buf_size = 0;
	int line_count = 0;
	ssize_t line_size;
	FILE *fp = fopen("anh.txt", "r"); // n�y c�c b?n t?o m?t file txt r?i thay t�n nh�. Vd: It.txt nh�
	
	line_size = getline(&line_buf, &line_buf_size, fp);

	  
	while (line_size >= 0)
	{
	    line_count++;

	    printf("%s", line_buf);
	    sleep(1);

	    line_size = getline(&line_buf, &line_buf_size, fp);
	}
	 
	free(line_buf);
	line_buf = NULL;

	  
	fclose(fp);

	return 0;
}
