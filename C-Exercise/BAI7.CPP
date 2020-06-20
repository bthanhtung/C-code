//bai 7
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
 clrscr();
 printf("chuong trinh ve ma tran vuong:\n");
 float a[20][20];
 int n,i,j;
 printf("nhap kich thuoc cua ma tran vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%f",&a[i][j]);
   }
  printf("\n man tran vua nhap vao la:\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   printf("%5.2f",a[i][j]);
   printf("\n\n");
 }
 //sap xep ma tran theo chieu giam cua cac cot
 for(j=0;j<n;j++)
  for(i=0;i<n-1;i++)
   for(int k=i+1;k<n;k++)
   if(a[i][j]<a[k][j])
   {
    float tg=a[i][j];
    a[i][j]=a[k][j];
    a[k][j]=tg;
   }
  printf("\n man tran sau khi sap xep theo chieu giam cua cac cot la:\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   printf("%5.2f",a[i][j]);
   printf("\n\n");
 }
 //cho biet cac so nguyen to co trong ma tran
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   if(a[i][j]-floor(a[i][j])==0)
    {
      int u=0,nt=floor(a[i][j]);
      for(int k=1;k<=nt;k++)
      if(nt%k==0) u++;
      if(u==2) printf("%5.0f la so nguyen to",a[i][j]);
    }
 //cho biet vi tri cua cac phan tu lon nhat trong ma tran da cho
 float max=a[0][0];
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(max<a[i][j]) max=a[i][j];
 printf("phan tu lon nhat trong ma tran la:%5.2f",max);
 printf("\n cac vi tri cua phan tu lon nhat la:\n");
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(a[i][j]==max)
  printf("\n hang:%d cot:%d",i,j);
 //tim va in ra gia tri nho thu hai tren moi hang
 for(i=0;i<n;i++)
 {
   //tim gia tri nho nhat
   float min=a[i][0],min2=a[i][0];
  for(j=0;j<n;j++)
  if(min>a[i][j]) min=a[i][j];
  for(j=0;j<n;j++)
  if(a[i][j]<min2 &&a[i][j]>min) min2=a[i][j];
  printf("\n gia tri nho thu hai tren hang %d la:%5.2f",i,min2);
 }
 getch();
}