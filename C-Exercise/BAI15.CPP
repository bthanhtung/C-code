//bai 15:day so thuc,tim so duong nho nhat,max,min,vt,tong gia tri nho nhat,lon nhat,so co phan le thap phan dai nhat
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
 clrscr();
 float a[100];
 int n,i,d=0;
 printf("nhap so phan tu cua day vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("a[%d]=",i);
  scanf("%f",&a[i]);
  if(a[i]>0) d++;
  }
 float max=a[0],min=a[0],s1,s2;
 for(i=1;i<n;i++)
 if(max<a[i]) max=a[i];
 else if(min>a[i]) min=a[i];
 printf("\n phan tu lon nhat la:%5.2f \n phan tu nho nhat la:%5.2f",max,min);
 s1=s2=0;
 for(i=0;i<n;i++)
 if(max==a[i])
  {
   printf("\n vi tri phan tu lon nhat la:%d",i);
   s1+=a[i];
  }
 else
  if(min==a[i])
   {
    printf("\n vi tri phan tu nho nhat la:%d",i);
    s2+=a[i];
    }
 printf("\n tong cac  phan tu lon nhat la:s1=%5.2f\n nho nhat:s2=%5.2f",s1,s2);

 if(d==0) printf("trong day khong co so duong nao");
  else
  {
   float minc=max;
   for(i=0;i<n;i++)
   if(a[i]>0 &&a[i]<minc) minc=a[i];
   printf("\nso duong nho nhat trong day la:%5.2f",minc);
  }
  //tim so co phan le thap phan dai nhat
  long b[100];//mang luu phan le thap phan cua cac phan tu mang a
  for(i=0;i<n;i++)
  {
   b[i]=long(100000000*(a[i]-floor(a[i])));
   if(b[i]!=0)
     while(b[i]%10==0) b[i]/=10;
  }
  long dai=b[0];
  int vt=0;
  for(i=1;i<n;i++)
  if(dai<b[i])
  {
   dai=b[i];
   vt=i;
   }
 printf("\n phan tu co phan le thap phan dai nhat la:%f",a[vt]);
 getch();
}