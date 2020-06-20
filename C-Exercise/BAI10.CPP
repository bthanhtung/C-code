//bai 10
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char st[100],kt;
 printf("nhap xau ki tu vao:");fflush(stdin);gets(st);
 printf("nhap ki tu vao:kt=");scanf("%c",&kt);
 int d=0;
 for(int i=0;i<strlen(st);i++)
 if(kt==st[i]) d++;
 printf("\n %c xuat hien %d lan trong xau ban dau",kt,d);
 getch();
}