//bai 3
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 printf("chuong trinh ve xau ki tu:\n");
 char st[100];
 printf("nhap xau vao:st=");fflush(stdin);
 gets(st);
 //doi chu thuong thanh chu hoa-hoa thanh thuong
 int i,d;
 for(i=0;i<strlen(st);i++)
 if(st[i]!=' ')
  if(st[i]==tolower(st[i]))
     st[i]=toupper(st[i]);
  else st[i]=tolower(st[i]);
   printf("\n xau sau khi doi chu thuong thanh hoa-hoa thanh thuong la:%s\n",st);
 //dem so tu bat dau bang T hoac G
 if(st[0]=='T' ||st[0]=='G') d=1;
 else d=0;
 for(i=0;i<strlen(st)-1;i++)
 if(st[i]==' '&&(st[i+1]=='T'|| st[i+1]=='G')) d++;
 printf("so tu trong xau bat dau bang T hoac G la:%3d \n",d);
//dem so tu trong xau
 if(st[0]!=' ') d=1;
 else d=0;
 for(i=0;i<strlen(st)-1;i++)
 if(st[i]==' ' && st[i+1]!=' ') d++;
 printf("so tu trong xau la:%3d \n",d);
 char tu[100];
 printf("\n nhap tu vao:tu=");fflush(stdin);
 gets(tu);
 strupr(st);strupr(tu);
 int n=strlen(st),m=strlen(tu);
 //bat dau kiem tra su xuat hien
 d=0;
 for(i=0;i<n;i++)
  if(st[i]==tu[0])
    {
     int ok=1;
     for(int k=1;k<m;k++)
     if(st[i+k]!=tu[k])
      {
       ok=0;
       break;
      }
     if(ok)
      { printf("\n%s co xuat hien trong xau o vi tri %d",tu,i);
	d++;
       }
   }
  if(d==0) printf("\n %s khog xuat hien trong xau",tu);
 getch();
}