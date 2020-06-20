#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct bn
      {
       char ht[100],dc[100],kdt[100];
       int sn;
       float tvp;
       };
void main()
{
 clrscr();
 bn a[100];
 int n,i,snn;
 float tv;
 printf("nhap so benh nhan vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n %d:ho ten:",i+1);fflush(stdin);gets(a[i].ht);
  printf("dia chi:");fflush(stdin);gets(a[i].dc);
  printf("khoa dieu tri:");fflush(stdin);gets(a[i].kdt);
  printf("so ngay nam vien:sn=");scanf("%d",&snn);
  a[i].sn=snn;
  printf("tien vien phi:");scanf("%f",&tv);
  a[i].tvp=tv;
 }
 //tim dieu kien la khoa noi va co so ngay nam vien <7
 printf("\n benh nhan o khoa noi la:\n");
 for(i=0;i<n;i++)
  if(stricmp(a[i].kdt,"khoa noi")==0 && (a[i].sn<7))
   printf("\n ho ten:%s dia chi:%s so ngay nam vien:%d",a[i].ht,a[i].dc,a[i].sn);
   getch();
}