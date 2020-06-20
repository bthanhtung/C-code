#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char st[100],c;
 int i;
 printf("\n nhap xau ki tu sao cho khong co ki tu nao trung nhau:\n");
 //phai nhap theo cach nhap tung ki tu:dung getch(),getche(),dung strchr(string,char)-tim su xh
 i=-1;
 do
 {
   fflush(stdin);
   c=getche();
   i++;
   if(strchr(st,c)!=NULL)
    {
     printf("\n nhap loi");
     break;
    }
   else
    st[i]=c;
 }
 while(1);
 printf("\n  xau vua nhap duoc la:%s",st);
 getch();
}