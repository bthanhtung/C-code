//bai 16:day so thuc,tim so duong nho nhat,max,min,vt,tong gia tri nho nhat,lon nhat,
//so co phan le thap phan ngan nhat
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
 clrscr();
 float a[100];
 int n,i,d=0;
 printf("nhap so phan tu cua day vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("a[%d]=",i);
  scanf("%f",&a[i]);
 }
 float m;
 printf("nhap so thuc can kiem tra vao:m=");scanf("%f",&m);
 for(i=0;i<n;i++)
 if(m==a[i])
 {
  d++;
  printf("so vua nhap vao co xuat  hien tai vi tri :%d",i);
 }
 if(d==0)printf("\n so vua nhap vao khong xuat hien trong day da cho");
  //tim so co phan le thap phan ngan nhat
  long b[100];//mang luu phan le thap phan cua cac phan tu mang a
  for(i=0;i<n;i++)
  {
   b[i]=long(100000000*(a[i]-floor(a[i])));
   if(b[i]!=0)
     while(b[i]%10==0) b[i]/=10;
  }
  long ngan=b[0];
  int vt=0;
  for(i=1;i<n;i++)
  if(ngan>b[i])
  {
   ngan=b[i];
   vt=i;
   }
 printf("\n phan tu co phan le thap phan ngan nhat la:%5.2f",a[vt]);
 getch();
}