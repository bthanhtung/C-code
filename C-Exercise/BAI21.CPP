//bai 21:hoten,tuoi,diem trung binh
#include<stdio.h>
#include<conio.h>
typedef struct sv
       {
       char ht[100];
       int t;
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
  printf("tuoi:");scanf("%d",&tg);
  a[i].t=tg;
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
  if(a[i].dtb==max)
   printf("\n ho ten:%s tuoi:%d DTB:%5.2f",a[i].ht,a[i].t,a[i].dtb);
  //tim sinh vien co tuoi lon nhat
  int maxt=a[0].t;
  for(i=1;i<n;i++)
  if(maxt<a[i].t) maxt=a[i].t;
  printf("\n cac sinh vien co tuoi lon nhat la:\n");
  for(i=0;i<n;i++)
  if(a[i].t==maxt)
  printf("\n ho ten:%s tuoi:%d DTB:%5.2f",a[i].ht,a[i].t,a[i].dtb);
  getch();
}