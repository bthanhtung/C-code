#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
typedef struct tt
       {
	char ht[100],ns[100];
	float dtb;
	};
	struct sv
	 {
	  tt inf;
	  sv *next;
	 };
void main()
{
   clrscr();
   sv *l,*p;
   float tb;
   char t[100];
   printf("nhap thong tin cho cac sinh vien dung khi nhap ho ten rong:\n");
   l=NULL;
   while(1)
   {
     printf("\n ho ten:");fflush(stdin);gets(t);
     if(t[0]=='\0') break;
     p=(sv*)malloc(sizeof(sv));
     strcpy(p->inf.ht,t);
     printf("ngay sinh:");fflush(stdin);gets(p->inf.ns);
     printf("diem trung binh:");scanf("%f",&tb);
     p->inf.dtb=tb;
     p->next=l;
     l=p;
   }
   printf("\n danh sach sinh vien co diem trung binh cao nhat la:\n");
   p=l;
   float max=p->inf.dtb;
   while(p!=NULL)
   {
     if(max<p->inf.dtb)
     max=p->inf.dtb;
     p=p->next;
   }
   p=l;
   while(p!=NULL)
   {
    if(p->inf.dtb==max)
     printf("\n ho ten:%s ngay sinh:%s dtb:%5.2f",p->inf.ht,p->inf.ns,p->inf.dtb);
     p=p->next;
    }
   //sap xep theo ngay sinh
  sv *q;
  p=l;
  while(p->next!=NULL)
   {
    q=p->next;
    while(q!=NULL)
    {
      if(stricmp(strrev(p->inf.ns),strrev(q->inf.ns))>0)
      {
       tt tg=p->inf;
       p->inf=q->inf;
       q->inf=tg;
       }
     q=q->next;
     }
   p=p->next;
  }
  printf("\n danh sach sau khi sap xep theo ngay sinh la:\n");
  p=l;
  while(p!=NULL)
  {
    printf("\n ho ten:%s ngay sinh:%s diem trung binh:%5.2f",p->inf.ht,strrev(p->inf.ns),p->inf.dtb);
    p=p->next;
  }
   getch();
}

