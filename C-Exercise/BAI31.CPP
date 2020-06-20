#include<stdio.h>
#include<conio.h>
typedef struct canbo
    {
    char ht[100];
    int ml,pc,nc,gt;
    float tt;
    };
void main()
{
 clrscr();
 printf("chuong trinh tinh tien luong thuc linh cho can bo:");
 canbo a[100];
 int n,i,m,p;
 int c;
 printf("nhap so can bo vao:n=");scanf("%d",&n);
 printf("nhap thong tin cho  tung can bo:\n");
 for(i=0;i<n;i++)
 {
 printf("\n %d: ho ten:",i+1);fflush(stdin);//lam sach bo nho dem
 gets(a[i].ht);
 printf("gioi tinh(nam[1]/nu[0]):");scanf("%d",&m);
 a[i].gt=m;
 printf("muc luong:");scanf("%d",&m);
 a[i].ml=m;
 printf("ngay cong:");scanf("%d",&c);
 a[i].nc=c;
 printf("phu cap ngay cong:");scanf("%d",&p);
 a[i].pc=p;
 //tinh tien
 a[i].tt=(a[i].nc*a[i].ml)/22.0+a[i].pc;
 }
 printf("\n danh sach can bo cung voi muc tien thuc linh la:\n");
 for(i=0;i<n;i++)
 for(int j=i+1;j<n;j++)
 if(a[i].tt<a[j].tt)
 {
 float tg=a[i].tt;
 a[i].tt=a[j].tt;
 a[j].tt=tg;
 }
 for(i=0;i<n;i++)
 printf("\n  %s tien linh:%5.0f d",a[i].ht,a[i].tt*1000);
 //dem so nguoi co tien thuc linh>800
 int d=0;
 for(i=0;i<n;i++)
 if(a[i].tt>800) d++;
 printf(" \n so nguoi co tien thuc linh >800 ngan la:%d",d);
 //viet ra danh sach theo nam truoc nu sau
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++)
 if(a[i].gt<a[j].gt)
 {
   canbo tg=a[i];
   a[i]=a[j];
   a[j]=tg;
 }
 printf("\n danh sach cac can bo  viet nam truoc nu sau la:\n");
 for(i=0;i<n;i++)
  {
   printf("\n  %s tien linh:%5.0f d",a[i].ht,a[i].tt*1000);
   printf("gioi tinh:");
   if(a[i].gt) printf("nam");
   else printf("nu");
   }
 getch();
}