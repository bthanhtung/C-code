//bai 4
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 float a[100],min;
 int n,i,d=0,t=0;
 printf("nhap so phan tu cua day:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("a[%d]=",i);
  scanf("%f",&a[i]);
  if(a[i]==0) t++;
  if(a[i]>0) d++;
 }
 printf("\n day so vua nhap vao la:\n");
 for(i=0;i<n;i++)
 printf("%5.2f",a[i]);
 //tim so duong nho nhat
 if(d==0) printf("\n trong day khong co so duong nao\n");
 else
  {
    min=3000000;//gioi han cua so thuc
    for(i=0;i<n;i++)
    if(a[i]>0 &&a[i]<min)
     min=a[i];
    printf("so duong nho nhat la:%5.2f \n",min);
  }
 if(t==0) printf("\n trong  day khong co so 0 nao\n");
 else
   printf("trong day co %d so 0",t);
 //sap xep day so da cho
 for(i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
  if(a[i]>a[j])
   {
    float tg=a[i];
    a[i]=a[j];
    a[j]=tg;
   }
 printf("\n day sau khi sap xep la:\n");
 for(i=0;i<n;i++)
 printf("%5.2f",a[i]);
 //doc so vua nhap vao
 //chuyen ve so nguyen roi ap dung thuat toan
 getch();
}