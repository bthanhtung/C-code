//dem so chu h,H cat bo khoang trong vo nghia,dem ki tu khong phai chu cai
//doi tat ca thanh chu hoa,nhap day ki tu kiem tra co xuat hien trong day khong?
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
 clrscr();
 char st[100],x[100],stc[100];
 int n,i,d=0;
 printf("nhap xau ki tu vao:");fflush(stdin);
 gets(st);
 for(i=0;i<strlen(st);i++)
 if(st[i]=='h'||st[i]=='H') d++;
 printf("\n so ki tu la H hoac h la:%3d",d);
 //dem so ki tu la chu cai
 d=0;
 for(i=0;i<strlen(st);i++)
 if(isalpha(st[i])) d++;
 printf("\n so ki tu khong phai la chu cai la:%3d",strlen(st)-d);
 //cat bo khoang trong vo nghia ben trai xau
 i=0; int k=0;
 while(st[i]==' ') i++;
 for(;i<strlen(st);i++)
  if(st[i]!=' '||(st[i]==' '&&st[i-1]!=' '))
  {
   stc[k]=st[i];
   k++;
   }
   stc[k]='\0';
 strcpy(st,stc);
 printf("\n xau sau khi cat bo khoang trong ben trai la:%s\n",st);
 //kiem tra xem chuoi ki tu nhap vao co thuoc trong xau da cho khong?
 printf("\n nhap vao day ki tu-dung thi nhap dau cach:\n");
 i=0;
 printf("x=");
 while(1)
 {
    fflush(stdin);//scanf("%c",&x[i]);
   x[i]=getch();
   putchar(x[i]);
   if(x[i]!=' ') i++;
   else break;
 }
 x[i]='\0';
 n=i;
 printf("\n day ki tu vua nhap duoc la:%s\n",x);
 //kiem tra xem xau ki tu co xuat hien trong day vua nhap khong?
 d=0;
 for(i=0;i<strlen(st);i++)
 if(st[i]==x[0])
 {
   int ok=1;
   for(int j=1;j<n;j++)
   if(st[i+j]!=x[j])
    {
     ok=0;
     break;
    }
    if(ok)
     {
       d++;
       printf("\n day ki tu co xuat hien trong xau o vi tri:%d",i);
     }
 }
 if(d==0) printf("\n day ki tu khong xuat hien trong xau");
 //viet hoa toan bo xau
  strupr(st);
  printf("\n xau sau khi viet hoa la:%s\n",st);
  getch();
}