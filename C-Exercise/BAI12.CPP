//bai 12:
#include<stdio.h>
#include<conio.h>
int a[100],n,i;
void swap(int *x,int *y)
{
  int tg=*x;
  *x=*y;
  *y=tg;
}
void partition(int i,int j,int *R)
{
 int  p=a[i],l=i,r=j+1;
 do
 {
  l++;
  }while(a[l]<=p&&l<j);
  do{
  r--;
  }while(a[r]>p);
  while(l<r)
  {
   swap(&a[r],&a[l]);
   do
  {
  l++;
  }while(a[l]<=p);
  do{
  r--;
  }while(a[r]>p);
 }
 swap(&a[r],&a[i]);
 *R=r;
}
void quicksort(int p,int q)
{
 int k=0;
 if(p<q)
  {
   partition(p,q,&k);
   quicksort(p,k-1);
   quicksort(k+1,q);
   }
}
void main()
{
 clrscr();

 do
 {
  printf("nhap so phan tu cua day  vao:n=");scanf("%d",&n);
  }while(n<2||n>20);
  for(i=0;i<n;i++)
  {
   printf("a[%d]=",i);
   scanf("%d",&a[i]);
  }
  int max=a[0],min=a[0],s1=0,s2=0;
  for(i=1;i<n;i++)
  {
   if(max<a[i]) max=a[i];
   if(min>a[i]) min=a[i];
  }
  printf("\n so lon nhat trong day la:%d",max);
  printf("vi tri cua so lon nhat la:");
  for(i=0;i<n;i++)
   if(max==a[i])
     {
      printf("%3d",i);
      s1+=a[i];
     }
   else
     if(min==a[i]) s2+=a[i];
  printf("\n tong cac so lon nhat la:s1=%3d",s1);
  printf("\n tong cac so nho nhat la:s2=%3d",s2);
  //thuat toan quick sort
  quicksort(0,n-1);
  printf("day sau khi sap xep theo thuat toan quick sort la:");
  for(i=0;i<n;i++)
  printf("%3d",a[i]);
  printf("\n day so sau khi sap xep giam dan la:\n");
  for(i=0;i<n-1;i++)
   for(int j=i+1;j<n;j++)
   if(a[i]<a[j])
    swap(&a[i],&a[j]);
  for(i=0;i<n;i++)
   printf("%3d",a[i]);
  getch();
}