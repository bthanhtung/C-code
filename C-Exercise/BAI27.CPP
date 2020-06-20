//ho ten,dia chi,so ng,so tien,khoa dieu tri, tien dat truoc,tien v[
//cho biet <10ng,no tien vie phi
#include<stdio.h>
#include<alloc.h>
#include<string.h>
#include<conio.h>
typedef struct bn
     {
      char ht[100],dc[100],kdt[100];
      int sn;
      float td,tvp;
      bn *next;
      };
void main()
{
 clrscr();
 bn *l,*p;
 char tg[100];
 int snn;
 float t;
 printf("nhap thong tin cho cac benh nhan[hoten rong-stop]:\n");
 l=NULL;
 while(1)
 {
  printf("\n ho ten:");fflush(stdin);gets(tg);
  if(tg[0]=='\0') break;
  //1:cap phat o nho
  p=(bn*)malloc(sizeof(bn));
  //2:do du lieu vao
  strcpy(p->ht,tg);
  printf("dia chi:");fflush(stdin);gets(tg);
  strcpy(p->dc,tg);
  printf("khoa dieu tri:");fflush(stdin);gets(tg);
  strcpy(p->kdt,tg);
  printf("so ngay nam vien:");scanf("%d",&snn);
  p->sn=snn;
  printf("so tien dat truoc:");scanf("%f",&t);
  p->td=t;
  if(snn>10)
   p->tvp=15*snn;
   else
    p->tvp=20*snn;
  //3:gan ket
  p->next=l;
  l=p;
 }
 printf("\n danh sach cac benh nhan con no tien vien phi la:\n");
 p=l;
 while(p!=NULL)
 {
  if(p->td<p->tvp)
   printf("\n %s dia chi:%s khoa dt:%s so ngay nam vien:%d tien no:%5.2f",p->ht,p->dc,p->kdt,p->sn,p->tvp-p->td);
   p=p->next;
 }
 printf("\n danh sach cac benh nhan co so ngay nam vien <10 la:\n");
 p=l;
 while(p!=NULL)
 {
  if(p->sn<10)
  printf("\n %s dia chi:%s khoa dt:%s so ngay nam vien:%d tvp:%5.2f",p->ht,p->dc,p->kdt,p->sn,p->tvp);
  p=p->next;
 }
 getch();
}