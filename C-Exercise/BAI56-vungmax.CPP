//chuong trinh ve ma tran
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[10][10],b[10][10],n;
int kq[10][10],t[10][10],ko,to;
void xet(int i,int j)
{
    if( (j<n&&b[i][j+1])&&(a[i][j+1]==a[i][j]))
     {
      to--;
      t[i][j+1]=a[i][j];
      b[i][j+1]=0;
      xet(i,j+1);
     }
   if(i<n && b[i+1][j] && a[i+1][j]==a[i][j])
      {
       to--;
       t[i+1][j]=a[i][j];
       b[i+1][j]=0;
       xet(i+1,j);
      }
    if( j>1 && b[i][j-1] && a[i][j-1]==a[i][j])
    {
      to--;
      t[i][j-1]=a[i][j];
      b[i][j-1]=0;
      xet(i,j-1);
    }
}
void main()
{
 clrscr();
 int i,j;
 printf("nhap n=");scanf("%d",&n);
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 {
  printf("a[%d][%d]=",i,j);
  scanf("%d",&a[i][j]);
  kq[i][j]=0;
 }
 printf("\n ma tran ban vua nhap vao la:\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  printf("%3d",a[i][j]);
  printf("\n\n\n");
  }
  //tim vung co do lon to nhat
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  b[i][j]=1;
  ko=n*n,to;//so cac so o cua ma tran
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  if(b[i][j])
  {
    // for(int u=1;u<=n;u++)
    // for(int q=1;q<=n;q++) t[u][q]=0;
     to=n*n-1;
     t[i][j]=a[i][j];
   b[i][j]=0;
   xet(i,j);
    printf("\n ket qua:\n");
    for(i=1;i<=n;i++)
     {
       for(j=1;j<=n;j++)
       printf("%3d",t[i][j]);
       printf("\n\n");
     }
    getch();
   if(to<ko)
    {
      for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
      kq[i][j]=t[i][j];
      ko=to;
    }


  }
    printf("\n khoang co nhieu phan tu giong nhau nhat la:\n");
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  if(kq[i][j]!=0) printf("%3d",kq[i][j]);
  else printf("  ");
  printf("\n\n\n");
  }
    getch();
}