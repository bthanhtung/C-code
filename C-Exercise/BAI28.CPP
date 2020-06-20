#include<stdio.h>
#include<conio.h>
typedef struct dt
 {
  char ht[100],sdt[20];
  float st;
  };
void main()
{
 clrscr();
 dt tb[100];
 int n,i;
 long sodt;
 float t;
 printf("chuong trinh ve tinh so tien cua thue bao cua dien thoai:\n");
 printf("nhap so thue bao vao :n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("\n %d:ho ten:",i+1);fflush(stdin);gets(tb[i].ht);
 printf("so dien thoai:");fflush(stdin);gets(tb[i].sdt);
 printf("so tien phai nop:");scanf("%f",&t);
 tb[i].st=t;
 }
 printf("\n so tien  phai nop cua cac thue bao la:\n");
 printf("HO TEN  |  SO DIEN THOAI  |SO TIEN PHAI NOP \n");
 float s=0;
 for(i=0;i<n;i++)
 {
 printf("\n %d",i+1);
 printf(" %s      %s    %5.2f",tb[i].ht,tb[i].sdt,tb[i].st);
 s+=tb[i].st;
 }
 printf(" \n tong so tien thu duoc tu cac thue bao la:%5.2f",s);
 //sap xep theo chieu tang cua so tien phai nop
 for(i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
  if(tb[i].st>tb[j].st)
  {
    dt tg=tb[i];
    tb[i]=tb[j];
    tb[j]=tg;
  }
 printf("\n danh sach cac thue bao co so tien phai nop >500 nghin la:\n");
 for(i=0;i<n;i++)
 if(tb[i].st>500)
 printf("\n ho ten:%s so dt:%s so tien:%5.2f",tb[i].ht,tb[i].sdt,tb[i].st);
  getch();
}