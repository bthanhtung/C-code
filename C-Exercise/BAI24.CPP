//bai 24:
#include<stdio.h>
#include<alloc.h>
#include<string.h>
#include<conio.h>
typedef struct bn
      {
       char ht[100],dc[100],kdt[100];
       int sn;
       float tvp;
       bn *next;
       };
void main()
{
 clrscr();
 bn *l,*p;
 int snn,i=0;
 float tv;
 char t[100];
 printf("nhap thong tin cho tung benh nhan-ho ten =rong thi dung:\n");
 l=NULL;
 while(1)
 {
  printf("\n %d:ho ten:",i+1);fflush(stdin);gets(t);
  if(t[0]=='\0') break;
  //1:cap phat o nho dong
  p=(bn*)malloc(sizeof(bn));
  //2:do du lieu vao
  strcpy(p->ht,t);
  printf("dia chi:");fflush(stdin);gets(t);
  strcpy(p->dc,t);
  printf("khoa dieu tri:");fflush(stdin);gets(t);
  strcpy(p->kdt,t);
  printf("so ngay nam vien:sn=");scanf("%d",&snn);
  p->sn=snn;
  printf("tien vien phi:");scanf("%f",&tv);
  p->tvp=tv;
  //gan vao danh sach
  p->next=l;
  l=p;
  i++;

 }
 //tim dieu kien la khoa noi va co so ngay nam vien <7
 printf("\n benh nhan o khoa noi  co so ngay nam vien nho hon 7 la:\n");
  p=l;
  while(p!=NULL)
  {
   if(stricmp(p->kdt,"khoa noi")==0 && (p->sn<7))
   printf("\n ho ten:%s dia chi:%s so ngay nam vien:%d,tvp:%5.2f",p->ht,p->dc,p->sn,p->tvp);
   p=p->next;
  }
   getch();
}