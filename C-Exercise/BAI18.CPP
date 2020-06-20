//bai 18:mang so nguyen:s nto,cp,sap hang ,cot
#include<stdio.h>
#include<math.h>
#include<conio.h>
int nto(int n)
{
 if(n<2) return 0;
 else
  {
    int u=0,k;
    for(k=2;k<=n/2;k++)
     if(n%k==0) u++;
    if(u==0) return 1;
    else return 0;
  }
}
void main()
{
 clrscr();
 int a[20][20],n,i,j;
 printf("nhap kich thuoc ma tran vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
  printf("a[%d][%d]=",i,j);
  scanf("%d",&a[i][j]);
 }
 printf("\n ma tran vua nhap vao la:\n");
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   printf("%3d",a[i][j]);
   printf("\n\n");
   }
  int s=0;
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  if(nto(a[i][j]))
   {
    printf("\n %3d la so nguyen to",a[i][j]);
    s+=a[i][j];
   }
   printf("\n tong cac so nguyen to trong ma tran la:s=%3d",s);
  //dem so luong cac phan tu la so chinh phuong
  int d=0;
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  if(pow(floor(sqrt(a[i][j])),2)==a[i][j])
   {
    printf("\n %3d la so chinh phuong",a[i][j]);
    d++;
    }
    if(d==0) printf("\n khong co so chinh phuong");
    else
     printf("\n trong ma tran co %d so chinh phuong",d);
  //sap xep ma tran
  int b[400],m=n*n;
  int k=0;
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
   b[k]=a[i][j];
   k++;
   }
  for(i=0;i<m-1;i++)
  for(j=i+1;j<m;j++)
  if(b[i]>b[j])
   {
    int tg=b[i];
    b[i]=b[j];
    b[j]=tg;
   }
  k=0;
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
   a[i][j]=b[k];
   k++;
   }
 printf("ma tran sau khi sap xep la:\n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   printf("%3d",a[i][j]);
   printf("\n\n");
   }
  getch();
}

