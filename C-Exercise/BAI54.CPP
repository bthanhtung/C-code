#include<stdio.h>
#include<conio.h>
int nto(int n)
{
 if(n<2) return 0;
 else
 {
   int u=0,k;
   for(k=2;k<=n/2;k++)
   if(n%k==0)
    {
     u++;
     break;
    }

   if(u==0) return 1;
    else return 0;
  }
}
void main()
{
 clrscr();
 int a[100],n,i,d;
 do{
      printf("nhap so pha tu cua day vao:n=");
      scanf("%d",&n);
  }while(n<2||n>20);
 for(i=0;i<n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }
 d=0;
 int s=0;
 //tim va in ra cac so nguyen to trong day
 for(i=0;i<n;i++)
 if(nto(a[i]))
 {
  printf("\n %3d la so nguyen to,vi tri:%d",a[i],i);
  d++;
 s+=a[i];
 }
 printf("tong cac so nguyen to trong day la:s=%3d",s);
  if(d==0) printf("\n trong day khong co so nguyen to nao");
  else  printf("\n trong day co %d so nguyen to",d);
 //tim phan tu lon thu hai trong day
 int max=a[0],max2=-32768;
 d=0;
 for(i=1;i<n;i++)
 if(max<a[i])
  {
   max2=max;
   max=a[i];
  }
 else
   if(a[i]<max && max2<a[i])
    max2=a[i];
   else d++;
  if(d==n-1)
     printf("\n trong day toan cac phan tu bang nhau \n nen khong co phan tu lon thu hai");
  else
     {
      printf("\n phan tu lon thu hai trong day la:%3d",max2);
      printf("vi tri la:\n");
      for(i=0;i<n;i++)
      if(max2==a[i]) printf("%3d",i);
     }
   getch();
}