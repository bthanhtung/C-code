//bai 20:ma tran thuc,kiem tra hang giong nhau,
//phan tulon nhat tren dong,saxtheo chieu tang cua moi cot
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 float a[20][20];
 int n,i,j;
 printf("nhap kich thuoc ma tran :n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
  printf("a[%d][%d]=",i,j);
  scanf("%f",&a[i][j]);
 }
 printf("\n ma tran vua nhap la:\n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   printf("%5.2f",a[i][j]);
   printf("\n\n\n");
   }
  // tim phan tu lon nhat tren moi hang cua ma tran
  for(i=0;i<n;i++)
  {
   float max=a[i][0];
   for(j=1;j<n;j++)
   if(max<a[i][j]) max=a[i][j];
   printf("\n phan tu lon nhat tren hang %d la:%5.2f",i,max);
   }
  //kiem tra xem trong ma tran co hang nao giong nhau hay khong
  int d=0;
  for(i=0;i<n-1;i++)
   for(int k=i+1;k<n;k++)
   {
     int kt=1;
     for(j=0;j<n;j++)
     if(a[i][j]!=a[k][j])
     {
      kt=0;
      break;
     }
    if(kt==1)
     { printf("\n hang thu %d giong hang %d",i,k);
       d++;
       }
  }
  if(d==0) printf("\n trong ma tran khong co hang nao giong nhau");
  //sap xep ma tran theo chieu tang cua moi cot
  for(j=0;j<n;j++)
  {
   for(i=0;i<n-1;i++)
   for(int k=i+1;k<n;k++)
   if(a[i][j]>a[k][j])
   {
    float tg=a[i][j];
    a[i][j]=a[k][j];
    a[k][j]=tg;
    }
  }
  printf("\n ma tran sau khi sap xep theo chieu tang cua moi cot la:\n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   printf("%5.2f",a[i][j]);
   printf("\n\n\n");
   }
 getch();
}