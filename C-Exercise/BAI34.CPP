#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
typedef struct sach
	{
	 char ts[100],tg[100];
	 int sl;
	 long g;
	 sach *next;
	};
void main()
{
 clrscr();
 sach *l,*p;
 char t[100];
 int slg;
 long dg;
 printf("nhap thong tin cho sach dung nhap khi nhap ten sach rong:\n");
 l=NULL;
 while(1)
 {
   printf("ten sach:");fflush(stdin);gets(t);
   if(t[0]=='\0') break;
   p=(sach*)malloc(sizeof(sach));
   strcpy(p->ts,t);
   printf("ten tac gia:");fflush(stdin);gets(t);
   strcpy(p->tg,t);
   printf("so luong:");scanf("%d",&slg);
   p->sl=slg;
   printf("gia:[nghin]");scanf("%ld",&dg);
   p->g=dg;
  p->next=l;
  l=p;
 }
 printf("\n danh sach vua nhap voi nhung cuon>30 nghin la:\n");
 p=l;
 while(p!=NULL)
 {
 if(p->g>30)
  printf("\n ten sach:%s tac gia:%s so luong:%d gia:%ld",p->ts,p->tg,p->sl,p->g);
 p=p->next;
 }
 //ghi lai vao danh sach moi voi nhung cuon co hon 15 dau sach
 sach *l1,*q;
 l1=NULL;
 p=l;
 while(p!=NULL)
 {
  if(p->sl>15)
  {
    q=(sach*)malloc(sizeof(sach));
    *q=*p;
    q->next=l1;
    l1=q;
  }
  p=p->next;
  }
 printf("\n danh sach lien ket moi la:\n");
 p=l1;
 while(p!=NULL)
 {
   printf("\n ten sach:%s tac gia:%s so luong:%d gia:%ld",p->ts,p->tg,p->sl,p->g);
   p=p->next;
 }
 //dem so sach co gia 30-100
 int d=0;
 p=l;
 while(p!=NULL)
 {
 if(p->g>30&&p->g<100)
  d++;
  p=p->next;
  }
 printf("so sach co gia nam trong khoang 30-100 la:%d",d);
 getch();
}