#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
typedef struct dg
       {
	char ht[100],dc[100];
	char nm[100],nt[100];
	dg *next;
	};
void main()
{
 clrscr();
 dg *l,*p,*q;
 int tg;
 char x[100];
 printf("nhap thong tin cho cac doc gia(stop- ho ten rong:\n");
 l=NULL;
 while(1)
 {
   printf("ho ten :");fflush(stdin);gets(x);
   if(x[0]=='\0') break;
   //voi kieu dslk thi can lam cac buoc sau:
   //1:cap phat o nho
   p=(dg*)malloc(sizeof(dg));
   //2:do du lieu vao
   strcpy(p->ht,x);
   printf("dia chi:");fflush(stdin);gets(x);
   strcpy(p->dc,x);
   printf("ngay muon:");fflush(stdin);gets(x);
   strcpy(p->nm,x);
   printf("ngay tra:");fflush(stdin);gets(x);
   strcpy(p->nt,x);
  //gan ket vao danh sach
  p->next=l;
  l=p;
 }
 printf("\n danh sach cac doc gia co ten la HOA la:\n");
 char t[100];
 strcpy(t,"HOA");
 printf("\n thong tin ve cac doc gia co ten la HOA:\n");
 int d=0;
 p=l;
 while(p!=NULL)
 {
   int i,j;
   strupr(p->ht);//viet hoa ho ten
   j=strlen(p->ht)-1;
   while(p->ht[j]==' ') j--;
   i=j;
   while(p->ht[i]!=' ') i--;
   i++;
   int ok=1;
   for(int u=0;u<3;u++)
    if(p->ht[i+u]!=t[u])
     ok=0;
   if(ok)
   { d++;
     printf("\n ho ten:%s dia chi:%s ngay muon:%s ngay tra:%x",p->ht,p->dc,p->nm,p->nt);
    }
   p=p->next;
 }
 if(d==0) printf("khong co doc gia nao ten la HOA");
 //dem so luong doc gia o KHOA CNTT-DHTN
 d=0;
 p=l;
 while(p!=NULL)
 {
  if(stricmp(p->dc,"KHOA CNTT-DHTN")==0) d++;
  p=p->next;
  }
 printf("\n so luong doc gia o khoa CNTT-DHTN la:d=%d",d);

/*
 //sap xep danh sach theo chieu giam cua ngay tra
 p=l;
 while(p->next!=NULL)
 {
   q=p->next;
  while(q!=NULL)
  {
    if(strcmp(p->nt,q->nt)<0)
    {
     dg tg1=*p;
     *p=*q;
     *q=tg1;
    }
   q=q->next;
  }
  p=p->next;
 }
 printf("danh sach sau khi sap xep la:\n");
 p=l;
 while(p!=NULL)
 {
  printf("\n ho ten:%d dia chi:%s ngay muon:%s ngay tra:%s",p->ht,p->dc,p->nm,p->nt);
  p=p->next;
 } */
 getch();
}