//bai 8
//cot giam hang tang,vi tri phan tu nho nhat,tim phan tu lon nhat tren moi cot,so nto
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
  //sap xep ma tran theo chieu giam cua cac cot  va chieu tang cua hang
  //truoc het phai dua ma tran ve mang mot chieu,sau do sap xep mang nay theo chieu tang
  //sau do chuyen ve ma tran in nguoc lai ta duoc hang tang cot giam
  float b[400];
  int m=n*n,k=0;
 //chuyen ve mang mot chieu b
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
  b[k]=a[i][j];
  k++;
 }
 //sap xep mang mot chieu b
 for(k=0;k<m-1;k++)
 for(i=k+1;i<m;i++)
 if(b[k]>b[i])
   {
    float tg=b[i];
    b[i]=b[k];
    b[k]=tg;
   }
 //chuyen lai mang hai chieu a
 k=0;
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
  a[i][j]=b[k];
  k++;
 }
 printf("\n man tran co cot giam hang tang la:\n");
 for(i=n-1;i>=0;i--)
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
 //cho biet vi tri cua cac phan tu nho nhat trong ma tran da cho
 float min=a[0][0];
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(min<a[i][j]) min=a[i][j];
 printf("phan tu nho nhat trong ma tran la:%5.2f",min);
 printf("\n cac vi tri cua phan tu nho nhat la:\n");
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(a[i][j]==min)
  printf("\n hang:%d cot:%d",i,j);
 printf("tim va in ra gia tri lon nhat tren moi cot:\n");
 for(j=0;j<n;j++)
 {
  float maxc=a[0][j];
  for(i=0;i<n;i++)
  if(maxc<a[i][j]) maxc=a[i][j];
  printf("\n cot: %d la:%5.2f",j,maxc);
 }
 getch();
}