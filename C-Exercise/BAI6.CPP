//bai 6:
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[50],n,i,d=0;
 printf("nhap so phan tu cua day vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
  if(a[i]>0) d++;
 }
 printf("day so vua nhap vao la:\n");
 for(i=0;i<n;i++)
 printf("%3d",a[i]);
 if(d==0) printf("\n trong day khong co so duong  nao");
 else
  {
   int min=32767;
   for(i=0;i<n;i++)
   if(a[i]>0 && a[i]<min) min=a[i];
   printf(" \n so duong nho nhat la:%d",min);
 }
 //tinh tong cac so chinh phuong trong day vua nhap
 int s=0;
 for(i=0;i<n;i++)
 if(pow(floor(sqrt(a[i])),2)==a[i]) s+=a[i];
 printf("\n tong cac so chinh phuong trong day la:%3d",s);
 //sap xep day theo chieu giam dan
 for(i=0;i<n-1;i++)
 for(int j=i+1;j<n;j++)
 if(a[i]<a[j])
 {
  int tg=a[i];
  a[i]=a[j];
  a[j]=tg;
  }
 printf("\n day so sau khi sap xep theo chieu giam dan la:\n");
 for(i=0;i<n;i++)
 printf("%3d",a[i]);
 //phan file tep
 getch();
}