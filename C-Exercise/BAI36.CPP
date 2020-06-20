#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
typedef struct dg
	{
	 char ht[100],dc[255],ts[255],ng_m[100],ng_tr[100];
	 dg *next;
	};
void main()
{
  clrscr();
  dg *p,*l;
  printf("chuong trinh ve quan ly doc gia:\n");
  printf("nhap thong tin vao[stop nhap ho ten la rong]:\n");
  char t[100],dcn[255],tsm[255],m[100],tr[100];
  //khoi tao danh sach rong
  l=NULL;//phai viet hoa
  while(1)
  {
   printf("\n ho ten:");fflush(stdin);//phai lam sach bon nho dem truoc khi nhap du lieu chuoi
   gets(t);
   if(t[0]==0) break;//t[0]==0 thi la xau rong
   //yeu cau may tinh cap phat o nho
   p=(dg*)malloc(sizeof(dg));
   strcpy(p->ht,t);
   printf("\n dia chi:");fflush(stdin);gets(dcn);
   strcpy(p->dc,dcn);
   printf("\n ten sach muon:");fflush(stdin);gets(tsm);
   strcpy(p->ts,tsm);
   printf("\n ngay muon:");fflush(stdin);gets(m);
   strcpy(p->ng_m,m);
   printf("\n ngay tra:");fflush(stdin);gets(tr);
   strcpy(p->ng_tr,tr);
   //gan ket vao danh sach
   p->next=l;
   l=p;
  }
  printf("\n danh sach ban vua nhap vao la:\n");
  p=l;
  while(p!=NULL)
  {
   printf("\n ho ten:%s dia chi:%s \nten sach:%s ngay muon:%s ngay tra:%s",p->ht,p->dc,p->ts,p->ng_m,p->ng_tr);
   p=p->next;
  }
  //dem so doc gia da muon sach o lop k2c-khoa cntt
  int d=0;
  p=l;
  while(p!=NULL)
  {
   if(stricmp(p->dc,"K2c-khoa CNTT")==0) d++;
   p=p->next;
  }
  printf("\n co %d doc gia o lop K2C-khoa cntt",d);
  printf("\n in ra danh sach cac doc gia co ten la AN:\n");
   t[10];
  strcpy(t,"AN");
  d=0;
  p=l;
  while(p!=NULL)
  {
    int i,j=strlen(p->ht)-1;
    while(p->ht[j]==' ') j--;
    i=j;
    while(p->ht[i]!=' ') i--;
    if(j-i==strlen(t))
    {
     strupr(p->ht);
     i++;
     int ok=1;
     for(int u=0;u<strlen(t);u++)
     if(p->ht[i+u]!=t[u])
      ok=0;
     if(ok)
      {
       d++;
       printf("\n ho ten:%s dia chi:%s \n ten sach:%s \n ngay muon:%s ngay tra:%s",p->ht,p->dc,p->ts,p->ng_m,p->ng_tr);
      }
    }
   p=p->next;
  }
 if(d==0) printf("khong co sv nao ten la:An");
  getch();
}