#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct sv
      {
       char ht[100],ns[100];
       float t,l,h,td;
       };
void main()
{
 clrscr();
 sv a[100];
 int n,i;
 float tg,dc;
 printf("nhap so sinh vien vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n %d:ho ten:",i+1);fflush(stdin);gets(a[i].ht);
  printf("ngay sinh:");fflush(stdin);gets(a[i].ns);
  printf("diem toan:");scanf("%f",&tg);
  a[i].t=tg;
  printf("diem ly:");scanf("%f",&tg);
  a[i].l=tg;
  printf("diem hoa:");scanf("%f",&tg);
  a[i].h=tg;
  a[i].td=a[i].t+a[i].h+a[i].l;
  }
 printf("nhap diem chuan thi dai hoc:");scanf("%f",&dc);
 printf("\n danh sach cac thi sinh thi truot la:\n");
 for(i=0;i<n;i++)
 if(a[i].td<dc)
 printf("\n ho ten:%s ngay sinh:%s tong diem:%d",a[i].ht,a[i].ns,a[i].td);
 //sap xep theo ho ten
 for(i=0;i<n-1;i++)
 for(int j=i+1;j<n;j++)
  if(stricmp(a[i].ht,a[j].ht)>0)
   {
     sv tg=a[i];
     a[i]=a[j];
     a[j]=tg;
   }
  else
  if(stricmp(a[i].ht,a[j].ht)==0)
   if(stricmp(strrev(a[i].ns),strrev(a[j].ns))>0)
    {
     sv tg=a[i];
     a[i]=a[j];
     a[j]=tg;
    }
 printf("\n danh sach sinh vein sau khi sap xep la:\n");
 for(i=0;i<n;i++)
 printf("\n ho ten:%s ngay sinh:%s diem toan:%5.2f ly:%5.2f hoa:%5.2f tong diem:%5.2f",a[i].ht,strrev(a[i].ns),a[i].t,a[i].l,a[i].h,a[i].td);
 getch();
}