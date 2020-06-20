#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<conio.h>
 
typedef struct {
	char *hoten,MSSV,lop;
	int TC;
	float TB;
}sinhvien;
 
void nhapsinhvien(sinhvien *sv) {
	char temp[100];
	printf("\nnhap ho ten: ");
	scanf("%s",&temp);
	fflush(stdin);
	(*sv).temp= temp;

 
	char MSSV;
	printf("\nnhap MSSV: ");
	scanf("%s",&MSSV);
	fflush(stdin);
	(*sv).MSSV= MSSV;
 
	char lop;
	printf("\nnhap lop: ");
	scanf("%s",&lop);fflush(stdin);
	(*sv).lop=lop;
 
	int TC;
	printf("\nnhap so tinh chi tich luy: ");
	scanf("%d",&TC);fflush(stdin);
	(*sv).TC=TC;
 
	float TB;
	printf("\nnhap diem trung binh tich luy: ");
	scanf("%f",&TB);fflush(stdin);
	(*sv).TB=TB;
}
 
int main() {
	sinhvien *dssv;
	int N;
	printf("nhap vao so sinh vien can quan ly:");
	scanf("%d",&N);
 
	dssv=(sinhvien *) malloc (N * sizeof (sinhvien));
 
	for(int i=0; i<N; i++) {
	 printf("nhap thong tin sinh vien thu %d\n",i+1);
	 nhapsinhvien((dssv+i));
	 }puts(" ");puts(" ");
 
 
	 for(int i=0; i<N; i++) { 
		printf("thong tin sinh vien thu %d:\n",i+1);
		printf("ho ten sinh vien: %s\n ",(*(dssv+i)).hoten);
  printf("MSSV: %s\n",(*(dssv+i)).MSSV);
	 printf("lop: %s\n :",(*(dssv+i)).lop);
	 printf("tinh chi tich luy: %d\n ",(*(dssv+i)).TC);
	 printf("diem trung binh tich luy: %.2f\n",(*(dssv+i)).TB);
	 }
	 getch ();
	 free(dssv);
	 return 0;
	}
