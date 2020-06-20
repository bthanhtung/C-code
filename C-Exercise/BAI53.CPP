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
 //kiem tra xem ma tran co phai la ma tran tam giac hay khong
 int tgt=1,tgd=1;
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  if(i<j && a[i][j]!=0) tgt=0;
  else
   if(i>j &&a[i][j]!=0) tgd=0;
 if(tgt && tgd) printf("vua tam giac tren ,vua tam giac duoi");
 else
  if(tgt) printf("ma tran tam giac tren");
  else if(tgd) printf("ma tran tam giac duoi");
  else printf("khong phai ma tran tam giac");
 getch();
}