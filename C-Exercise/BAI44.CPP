#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[20][20];
 int m,n,i,j;
 printf("nhap so hang cua ma tran:m=");scanf("%d",&m);
 printf("nhap so cot cua ma tran:n=");scanf("%d",&n);
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%d",&a[i][j]);
  }
 printf("\n ma tran vua nhap vao la:\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  printf("%3d",a[i][j]);
  printf("\n\n");
 }
 //tim phan tu lon nhat trong ma tran va vi tri cua no:
 int max=a[0][0];
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 if(max<a[i][j]) max=a[i][j];
 printf("\n phan tu lon nhat trong ma tran la:%3d",max);
 printf("\n vi tri cua max la:\n");
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 if(max==a[i][j])
  printf("\n hang:%d cot:%d",i,j);
  //tim gia tri nho nhat tren moi cot cua ma tran
  for(j=0;j<n;j++)
  {
   int min=a[0][j];
   for(i=0;i<m;i++)
   if(min>a[i][j])
    min=a[i][j];
    printf("\n gia tri nho nhat tren cot:%d la:%d",j,min);
   }
  //sap xep theo chieu tang cua hang
  for(i=0;i<m;i++)
   for(j=0;j<n-1;j++)
    for(int k=j+1;k<n;k++)
    if(a[i][j]>a[i][k])
    {
     int tg=a[i][j];
     a[i][j]=a[i][k];
     a[i][k]=tg;
    }
  printf("\n ma tran sau khi sap xep theo chieu tang cua hang la:\n");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   printf("%3d",a[i][j]);
   printf("\n\n\n");
  }
  //chuyen vi ma tran
  int b[20][20];
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   b[j][i]=a[i][j];
   printf("\n ma tran b la:\n");
   for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    printf("%3d",b[i][j]);
    printf("\n\n");
   }
  getch();
}