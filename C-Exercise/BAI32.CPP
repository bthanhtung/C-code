#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>

typedef struct thuoc
   {
   char nsx[100];
   char ten[100];
   long dg;
   int sl;
   thuoc *next;
   };
void main()
{
 clrscr();
 printf("nhap thong tin cho moi thuoc:");
 thuoc *p,*l;
 char t[100];
 int slg;
 long g;
 l=NULL;//khoi tao danh sach rong;
 while(1)
 {
   printf("\n nhap ten thuoc vao(dung nhap khi de trong->enter)::");
   fflush(stdin); gets(t);
   if(t[0]==0) break;
   p=(thuoc*)malloc(sizeof(thuoc));//cap phat o nho
   strcpy(p->ten,t);
   printf("nhap ten nha sx:");fflush(stdin);
   gets(p->nsx);
   printf("don gia:");scanf("%ld",&g);
   p->dg=g;
   printf("so luong :");scanf("%d",&slg);
   p->sl=slg;
   //gan ket vao danh sach
   p->next=l;
   l=p;
 }
 printf("\nthong tin ve ten thuoc va thanh tien cua xndptw1 sx la:\n");
 p=l;
 while(p!=NULL)
 {
 if(strcmpi(p->nsx,"XNDPTW1")==0)
  printf("\n ten thuoc:%s tien:%ld",p->ten,p->sl*p->dg);
  p=p->next;
 }
 //nhap vao ten thuoc kiem tra xem co phai cua xndptw1 khong
 char ten[100];
 int d=0;
 printf("nhap ten thuoc can kiem tra:");fflush(stdin);gets(ten);
 p=l;
 while(p!=NULL)
 {
  if( stricmp(p->ten,ten)==0 && stricmp(p->nsx,"XNDPTW1")==0)
  {
   d++;
   break;
   }
   p=p->next;
 }
 if(d) printf("la cua XNDPTW1 san xuat");
 else printf("khong phai do XNDPTW1 san xuat");
 getch();
}