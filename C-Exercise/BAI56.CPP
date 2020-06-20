#include<stdio.h>
#include<conio.h>
float a[10][10],kq[10][10],t[10][10];
int b[10][10],n,i,j,to,ko;
void xet(int i,int j)
{
 //xet theo 4 huong
 if(j>0&&b[i][j-1]&&a[i][j-1]==a[i][j])
 {
  t[i][j-1]=a[i][j];
  b[i][j-1]=0;
  to--;
  xet(i,j-1);
  }
  if(i>0&&b[i-1][j]&&a[i-1][j]==a[i][j])
 {
  t[i-1][j]=a[i][j];
  b[i-1][j]=0;
  to--;
  xet(i-1,j);
  }
  if(j<n-1 &&b[i][j+1]&&a[i][j+1]==a[i][j])
 {
  t[i][j+1]=a[i][j];
  b[i][j+1]=0;
  to--;
  xet(i,j+1);
  }
  if(i<n-1&&b[i+1][j]&&a[i+1][j]==a[i][j])
 {
  t[i+1][j]=a[i][j];
  b[i+1][j]=0;
  to--;
  xet(i+1,j);
  }
}
void main()
{
 clrscr();
 printf("nhap kich thuoc ma tran vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%f",&a[i][j]);
   b[i][j]=1;
   kq[i][j]=0;
  }
  printf("ma tran vua nhap vao la:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    printf("%5.2f",a[i][j]);
    printf("\n\n\n");
  }
 //tim phan tu lon nhat tren moi c ot
 for(j=0;j<n;j++)
 {
  float max=a[0][j];
  for(i=0;i<n;i++)
  if(max<a[i][j]) max=a[i][j];
  printf("\n phan tu lon nhat tren cot %d la:%5.2f",j,max);
  }
 //tim hang giong nhau trong ma tran
  for(i=0;i<n-1;i++)
  for(int k=i+1;k<n;k++)
  {
    int ok=1;
    for(j=0;j<n;j++)
    if(a[i][j]!=a[k][j])
     ok=0;
    if(ok) printf("\n  hang %d giong voi hang %d",i,k);
  }
  //tim vung co so phan tu bang nhau la nhieu nhat
  ko=n*n;
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   if(b[i][j])
   {
     int u,v;
     //xac lap lai cac gia tri ban dau cua mang luu ket qua tam thoi
     for(u=0;u<n;u++)
     for(v=0;v<n;v++)
      t[u][v]=0;
      //chu y:phai la gia tri o i,j moi gan vao
      t[i][j]=a[i][j];
      b[i][j]=0;
      to=n*n-1;
     xet(i,j);
     if(ko>to)
     {
      ko=to;
      for(u=0;u<n;u++)
      for(v=0;v<n;v++)
      kq[u][v]=t[u][v];
      }
   }
   printf("\n vung co so phan tu lon nhat la:\n");
    for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    if(kq[i][j]!=0)
      printf("%5.1f",kq[i][j]);
    else
     printf("%5s"," ");
    printf("\n\n\n");
  }
  getch();
}