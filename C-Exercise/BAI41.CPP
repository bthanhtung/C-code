#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
 clrscr();
 char st[100],st1[200],tu[100];
 printf("nhap xau ki tu vao:");fflush(stdin);gets(st);
 printf("\n xau ki tu vua nhap la:%s",st);
 int i,d=0;
 for(i=0;i<strlen(st);i++)
 if(st[i]==' ') d++;
 printf("\n so ki tu la dau cach trong xau vua nhap la:%d",d);
 printf("\n nhap tu can kiem tra vao:tu=");fflush(stdin);gets(tu);
 d=0;
 int dem=0,c;
 lap:
 while(st[d]==' ') d++;
 c=d;
 while(st[c]!=' '&&c<strlen(st)) c++;
 if(c-d==strlen(tu))
 {
  int ok=1;
  for(int u=0;u<strlen(tu);u++)
  if(st[d+u]!=tu[u]) ok=0;
  if(ok) dem++;
 }
 if(c<strlen(st))
  {
   d=c;
   goto lap;
  }
 if(dem) printf("\n %s xuat hien trong  xau %d lan:",tu,dem);
 else printf("tu khong xuat hien trong xau ban dau");
 //kiem tra xem xau co doi xung khong
 int dx=1;
 for(i=0;i<=strlen(st)/2;i++)
 if(st[i]!=st[strlen(st)-i-1])
 {
   dx=0;
   break;
 }
 if(dx) printf("\n xau doi xung");
 else printf("\n xau khong doi xung");
 printf("\n nhap du lieu cho xau den khi gap dau cham :\n ");
 i=-1;
 do
 {
   fflush(stdin);
  i++;//chu y:vi tri cua bien dieu khien
  st1[i]=getch();putchar(st1[i]);
  //st1[i]=getche();
 }
 while(st1[i]!='.');
 printf("\n xau vua nhap vao la:");
 for(int j=0;j<i;j++)
 printf("%c",st1[j]);
 getch();
}