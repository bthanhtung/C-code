#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float a[100];
 int n,i;
 printf("nhap so phan tu cua day vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("a[%d]=",i);
  scanf("%f",&a[i]);
  }
 //tim phan tu nho nhat,lon nhat trong day
 float max=a[0],min=a[0];
 for(i=1;i<n;i++)
 if(max<a[i]) max=a[i];
 else
 if(min>a[i]) min=a[i];
 printf("phan tu lon nhat trong day la:%5.2f phan tu nho nhat la:%5.2f",max,min);
 //kiem tra xem day so da duoc sap chua
 int t=1,g=1;
 for(i=0;i<n-1;i++)
 if(a[i]>a[i+1]) t=0;
 else
 if(a[i]<a[i+1]) g=0;
 if(g==0 &&t==0)
 printf("\n day chua duoc sap xep");
 else
  if(g) printf("\n day giam");
  else if(t) printf("\n day tang");
 //sap xep day theo phuong phap noi bot
 for(i=0;i<n-1;i++)
 for(int j=n-1;j>=i+1;j--)
 if(a[j]<a[j-1])
 {
  float tg=a[j];
  a[j]=a[j-1];
  a[j-1]=tg;
 }
 printf("\n day sau khi sap xep theo phuong phap noi bot la:\n");
 for(i=0;i<n;i++)
 printf("%5.2f",a[i]);
 //tim so co phan thuc lon nhat
 max=a[0]-floor(a[0]);
 for(i=1;i<n;i++)
 if(a[i]-floor(a[i])>max) max=a[i]-floor(a[i]);
 printf("\n so co phan thuc lon nhat la:\n");
 for(i=0;i<n;i++)
 if(a[i]-floor(a[i])==max)
 printf("\n %5.5f ",a[i]);
 getch();
}