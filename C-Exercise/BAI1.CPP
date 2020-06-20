  //BAI 1:tim so nguyen to,tinh tong cac  so nguyen to,tim so lon nhat,cai dat mang bang con tro
#include<stdio.h>
#include<conio.h>
int nto(int n) {
  if(n<2) return 0;
  else {
    int u = 0, k;
    for(k=2; k<=n/2; k++)
    if(n %k == 0) {
	     u++;
       break;
    }
      if(u==0) return 1;
      else     return 0;
   }
}
void sapxep()
{
 printf("chuong trinh ve viec su dung con tro trong mang hai chieu:");
 int a[30][30],n,i,j;
 int *p=(int *)a;
 printf("nhap kich thuoc cua mang vao:n=");scanf("%d",&n);
 int k=0;
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%d",p+k);
   k++;
  }
//neu khong dung k thi co the thay the:p(i*n+j)=p(k)
 //sap xep theo hang tang cot tang
 /*
 for(i=0;i<n*n-1;i++)
  for(j=i+1;j<n*n;j++)
  if(*(p+i)>*(p+j))
  {
   int tg=*(p+i);
   *(p+i)=*(p+j);
   *(p+j)=tg;
  }*/
//sap xep theo hang tang
 k=0;
 for(i=0;i<n;i++)
 {
   for(j=k;j<k+n-1;j++)
    for(int t=j+1;t<k+n;t++)
     if(*(p+j)>*(p+t))
     {
      int tg=*(p+j);
      *(p+j)=*(p+t);
      *(p+t)=tg;
     }
   k+=n;
 }
 printf("\n mang sau khi sap xep bang con tro la:\n");
 k=0;
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
    printf("%3d",*(p+k));
    k++;
   }
   printf("\n\n\n");
  }

}
//---------------------------------
void main()
{
 clrscr();
 int a[30][30],n,i,j;
 int *p;
 printf("nhap kich thuoc cua mang vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%d",&a[i][j]);
  }
 printf("\n mang vua nhap la:\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  printf("%3d",a[i][j]);
  printf("\n\n\n");
  }
 int s=0;
 printf("\n cac so nguen to trong mang vua nhap la:\n");
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(nto(a[i][j]))
  {
   printf("\n %3d",a[i][j]);
   s+=a[i][j];
  }
 printf("\n tong cac so nguyen to trong mang la:%d",s);
 printf("\n so lon nhat trong mang vua nhap la:");
 int max=a[0][0];
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(max<a[i][j]) max=a[i][j];
 printf("%3d",max);
  sapxep();
 getch();
}








































































































































































































































































































































































































































































































