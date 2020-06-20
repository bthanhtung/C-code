//chuong trinh ve phan so
#include<stdio.h>
#include<conio.h>
int a,b,uc,bc;
int ucln(int a,int b)
{
 while(a!=b)
 if(a>b) a-=b;
 else b-=a;
 return a;
}
int bcnn(int a,int b)
{
   return a*b/ucln(a,b);
}
void main()
{
 clrscr();
 printf("nhap vao hai so nguyen:a,b=");scanf("%d%d",&a,&b);
 printf("\n uoc chung lon nhat cua hai so la:%d",ucln(a,b));
 printf("\n boi chung nho nhat cua hai so la:%d",bcnn(a,b));
 int ts,ms;
 printf("\nnhap phan so can toi gian vao:ts/ms=");
 scanf("%d%d",&ts,&ms);
 int tg=ucln(ts,ms);
 printf("phan so sau khi toi gian la:%d/%d",ts/tg,ms/tg);
 printf("tinh tong,tich,hieu cua hai phan so:\n");
 int t1,t2,m1,m2;
 printf("\n phan so 1:t1/m1=");scanf("%d%d",&t1,&m1);
 printf("\n phan so 2:t2/m2=");scanf("%d%d",&t2,&m2);
 //tong
 ts=t1*m2+t2*m1;
 ms=m1*m2;
 tg=ucln(ts,ms);
 printf("\n tong cua hai phan so:\n");
 printf("\n %d/%d+%d/%d=%d/%d",t1,m1,t2,m2,ts/tg,ms/tg);
 //hieu
  ts=t1*m2-t2*m1;
  ms=m1*m2;
 // tg=ucln(ts,ms);
 printf("\n hieu cua hai phan so:\n");
 printf("\n %d/%d - %d/%d=%d/%d",t1,m1,t2,m2,ts,ms);
 //tich cua hai phan so
 ts=t1*t2;
 ms=m1*m2;
 tg=ucln(ts,ms);
 printf("\n tich cua hai phan so:\n");
 printf("\n (%d/%d)*(%d/%d)=%d/%d",t1,m1,t2,m2,ts/tg,ms/tg);
 getch();
}