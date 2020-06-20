//bai 19:,dem 'a',dem so tu bat dau bang T,G voi tu co hon 3 ki tu
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char st[100];
 int i,d=0;
 printf("nhap vao xau ki tu:st=");
  fflush(stdin);gets(st);
 for(i=0;i<strlen(st);i++)
 if(st[i]=='a') d++;
 printf("\n so ki tu la 'a' trong xau la:%d",d);
 d=0;
 for(i=0;i<strlen(st)-3;i++)
 if(st[i]==' '&&(st[i+1]=='T'||st[i+1]=='G')&& st[i+2]!=' '&&st[i+3]!=' '&&st[i+4]!=' ')
 d++;
 printf("\n trong xau co %d tu thoa man",d);
 getch();
}