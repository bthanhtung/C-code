#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
typedef  struct tb
	 {
	  char ht[100],sdt[20],dc[100];
	  char ndk[100];
	 };
	struct dt
       {
	tb inf;
	dt *next;
       };
void main()
{
 clrscr();
 dt *l,*p,*q,*tg1;
 float t;
 char tg[100];
 printf("chuong trinh ve tinh so tien cua thue bao cua dien thoai:\n");
 printf("nhap thong tin cho cac thue bao [dung khi sdt=0]:\n");
 l=NULL;
 while(1)
 {
   printf("\n so dien thoai:");fflush(stdin);gets(tg);
   if(stricmp(tg,"0")==0) break;

   p=(dt*)malloc(sizeof(dt));
   strcpy(p->inf.sdt,tg);
   printf("ho ten:");fflush(stdin);gets(tg);
   strcpy(p->inf.ht,tg);
   printf("ngay dang ki:");fflush(stdin);gets(tg);
   strcpy(p->inf.ndk,tg);
   printf("dia chi:");fflush(stdin);gets(tg);
   strcpy(p->inf.dc,tg);
   p->next=l;
   l=p;
 }
 printf("\n danh sach thue bao vua nhap la:\n");
 p=l;
 while(p!=NULL)
 {
  printf("\n ten:%s so dien thoai:%s ngay dang ki:%s dia chi:%s",p->inf.ht,p->inf.sdt,p->inf.ndk,p->inf.dc);
  p=p->next;
  }
 //sap xep theo ten thue bao
 p=l;
 while(p->next!=NULL)
 {
  q=p->next;
  while(q!=NULL)
  {
    if(stricmp(p->inf.ht,q->inf.ht)>0)
     {
      tb tg1=p->inf;
       p->inf=q->inf;
       q->inf=tg1;
     }
    q=q->next;
  }
  p=p->next;
 }
 printf("\n danh sach sau khi sap xep theo ngay dang ki:\n");
 p=l;
 while(p!=NULL)
 {
  printf("\n ten:%s so dien thoai:%s ngay dang ki:%s dia chi:%s",p->inf.ht,p->inf.sdt,p->inf.ndk,p->inf.dc);
  p=p->next;
  }
 getch();
}




