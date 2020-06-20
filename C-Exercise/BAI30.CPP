//bai 30:
#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct sv
       {
       char ht[100],q[100];
       float dtb;
       };
void main()
{
 clrscr();
 sv a[100];
 int n,i,tg;
 printf("nhap so sinh vien vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n%d: ho ten:",i);fflush(stdin);gets(a[i].ht);
  printf("que quan:");fflush(stdin);gets(a[i].q);
  float tp;
  printf("diem trung binh:");scanf("%f",&tp);
  a[i].dtb=tp;
  }
  //tim diem trung binh cao nhat
  float max=a[0].dtb;
  for(i=1;i<n;i++)
  if(max<a[i].dtb)
  max=a[i].dtb;
  printf("\n  diem trung binh cao nhat la:%5.2f",max);
  printf("\n danh sach cac sinh vien co diem trung binh cao nhat la:\n");
  for(i=0;i<n;i++)
  printf("\n %s quen quan:%s diem trung binh:%5.2f",a[i].ht,a[i].q,a[i].dtb);
  printf("\n danh sach cac sinh vien co diem trung binh <5.0 la:\n");
  for(i=0;i<n;i++)
  if(a[i].dtb<5)
  printf("\n %s quen quan:%s diem trung binh:%5.2f",a[i].ht,a[i].q,a[i].dtb);
  printf("\n danh sachc cac sinh vien co que quan tai thai nguyen la:\n");
  for(i=0;i<n;i++)
  if(stricmp(a[i].q,"thai nguyen")==0)
  printf("\n %s quen quan:%s diem trung binh:%5.2f",a[i].ht,a[i].q,a[i].dtb);
  getch();
}