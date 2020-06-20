//chuong trinh ve danh sach lien ket
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
typedef struct kh
       {
	char ht[100],dc[100],ten[100];
	int t;
	};
	struct tro
	{
	 kh infor;
	 tro *next;
	 };

void main()
{
 clrscr();
 tro *l,*p;
 printf("chuong trinh ve danh sach lien ket :\n");
 printf("nhap thong tin cho cac khach hang(dung thi nhap ten rong):\n");
 char ht[100];
 int t;
 l=NULL;
 while(1)
 {
   printf("\n ho ten:");fflush(stdin);
   gets(ht);
   if(ht[0]=='\0') break;
   //1:yeu cau may tinh  cap phat o nho
   p=(tro*)malloc(sizeof(tro));
   //2:do du lieu vao:
   strcpy(p->infor.ht,ht);
   printf("tuoi:");scanf("%d",&t);
   p->infor.t=t;
   printf("dia chi:");fflush(stdin);gets(p->infor.dc);
   //3:gan ket vao danh sach
   p->next=l;
   l=p;
 }
 printf("\n danh sach cac khach hang vua nhap vao la:\n");
 p=l;
 while(p!=NULL)
 {
  printf("\n ho ten:%s tuoi:%d dia chi:%s",p->infor.ht,p->infor.t,p->infor.dc);
  p=p->next;
 }
 //sap xep danh sach theo ten
  //1:tach ten ra
  p=l;
  while(p!=NULL)
  {
     int i,j,k,u;
     j=strlen(p->infor.ht)-1;
     while(p->infor.ht[j]==' ') j--;
     i=j;
     while(p->infor.ht[i]!=' ') i--;
     i++;
     for(k=0,u=i;u<=j;u++,k++)
     p->infor.ten[k]=p->infor.ht[u];
     p->infor.ten[k]='\0';//phai them ki tu ket thuc xau vao neu khong se bi chay sai
    p=p->next;
  }
  //2:sap xep theo ten
  tro *q;
  p=l;
  while(p->next!=NULL)
  {
   q=p->next;
   while(q!=NULL)
   {
    if(stricmp(p->infor.ten,q->infor.ten)>0)
    {
     kh tg=p->infor;
     p->infor=q->infor;
     q->infor=tg;
    }
    q=q->next;
   }
   p=p->next;
  }
  printf("danh sach sau khi sap xep theo ten la:\n");
  p=l;
  while(p!=NULL)
  {
    printf("\n ho ten:%s tuoi:%d dia chi:%s",p->infor.ht,p->infor.t,p->infor.dc);
    p=p->next;
  }
  //xay dung chuc nang tim kiem theo tuoi hoac theo ten
  int ch;
  printf("\n tim kiem:1-theo tuoi         2-theo ten:\n");
  do{
   printf("ban chon:");scanf("%d",&ch);
  }
  while(ch!=1 &&ch!=2);
  if(ch==1)
  {
   int tuoi;
   printf("nhap tuoi can tim kiem:");scanf("%d",&tuoi);
   printf("thong tin ve cac khach hang co tuoi vua nhap vao la:\n");
   p=l;
   while(p!=NULL)
   {
     if(p->infor.t==tuoi)
       printf("\n ho ten:%s tuoi:%d dia chi:%s",p->infor.ht,p->infor.t,p->infor.dc);
      p=p->next;
     }
  }
  else
  {
     char ten[100];
   printf("nhap ten can tim kiem:");fflush(stdin);gets(ten);
   printf("thong tin ve cac khach hang co ten vua nhap vao la:\n");
   p=l;
   while(p!=NULL)
   {
     if(stricmp(p->infor.ten,ten)==0)
       printf("\n ho ten:%s tuoi:%d dia chi:%s",p->infor.ht,p->infor.t,p->infor.dc);
      p=p->next;
     }
  }
 getch();
}