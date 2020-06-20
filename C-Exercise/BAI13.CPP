//bai 13:10-20,sx tang,nhap so,chen,kiemtra so xh,vt
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[100],n,i,k,m1,m2;
 do
 {
  printf("nhap so phan tu cua day vao:n=");scanf("%d",&n);
  }while(n<=10||n>=20);
  for(i=0;i<n;i++)
  {
   printf("a[%d]=",i);
   scanf("%d",&a[i]);
   }
 //sap xep
 for(i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
   if(a[i]>a[j])
    {
    int tg=a[i];
    a[i]=a[j];
    a[j]=tg;
    }
 printf("\n day sau khi sap xep la:\n");
 for(i=0;i<n;i++)
 printf("%3d",a[i]);
 printf("\n nhap so can chen vao:m1=");scanf("%d",&m1);
 //chen vao day so da cho
 if(m1>=a[n-1]) a[n]=m1;
 else
  if(m1<=a[0])
   {
    for(i=n;i>0;i--)
     a[i]=a[i-1];
    a[0]=m1;
    }
  else
  {
    for(i=0;i<n-1;i++)
    if(a[i]<=m1 &&m1<a[i+1])
     k=i+1;
    for(i=n;i>k;i--)
    a[i]=a[i-1];
    a[k]=m1;
  }
 printf("\n day sau khi chen them phan tu %d la:\n",m1);
 for(i=0;i<=n;i++)
 printf("%3d",a[i]);
 //nhap vao mot so kiem tra xem co xuat hien trong day hay khong
 printf("\n nhap so can kiem tra vao:m2=");scanf("%d",&m2);
 int d=0;
 for(i=0;i<=n;i++)
 if(m2==a[i])
  {
   d++;
   printf("\n %d xuat hien o vi tri:%d",m2,i);
   }
 if(d==0) printf("\n so khong xuat hien trong day");

getch();
}

