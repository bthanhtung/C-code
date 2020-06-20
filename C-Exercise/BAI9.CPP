//bai 9
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
  //sap xep ma tran theo chieu giam cua cac hang  va chieu tang cua cot
  //truoc het phai dua ma tran ve mang mot chieu,sau do sap xep mang nay theo chieu tang
  //sau do chuyen ve ma tran in nguoc lai ta duoc hang giam cot tang
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
 printf("\n man tran co: cot tang- hang giam la:\n");
 for(i=0;i<n;i++)
 {
  for(j=n-1;j>=0;j--)
   printf("%5.2f",a[i][j]);
   printf("\n\n");
 }
 //cho biet vi tri cua cac phan tu nho nhat trong ma tran da cho
 float min=a[0][0];
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(min>a[i][j]) min=a[i][j];
 printf("phan tu nho nhat trong ma tran la:%5.2f",min);
 printf("\n cac vi tri cua phan tu nho nhat la:\n");
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(a[i][j]==min)
  printf("\n hang:%d cot:%d",i,j);
 //lap mang mot chieu la trung binh cong cua cac so duong tren moi hang cua ma tran da cho
 float c[20];
 k=0;
 for(i=0;i<n;i++)
 {
  float s=0;
  for(j=0;j<n;j++)
  if(a[i][j]>0) s+=a[i][j];
  c[k]=s/n;
  k++;
 }
 printf("\n mang mot chieu la trung binh cong cua cac so duong tren  hang la:\n");
 for(i=0;i<n;i++)
 printf("%5.2f",c[i]);
 //nhap vao mot so va kiem tra xem so do co xuat hien trong ma tran hay khong
 float so;
 printf("\n nhap so vao:so=");scanf("%f",&so);
 int d=0;
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(so==a[i][j])
 {
  d++;
  printf("\n %5.2f xuat hien o vi tri:",so);
  printf("hang:%d cot: %d",i,j);
 }
 if(d==0) printf("so khong xuat hien");
 getch();
}