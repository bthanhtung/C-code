//bai 2
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
 //viet hoa chu cai in dau
 int i,d;
 if(st[0]!=' ') st[0]=toupper(st[0]);
 for(i=0;i<strlen(st)-1;i++)
 if(st[i]==' ' && st[i+1]!=' ')
  st[i+1]=toupper(st[i+1]);
  printf("\n xau sau khi viet hoa chu cai dau la:%s\n",st);
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
 //chuan hoa xau:co hai cach
 //ta don sang xau khac
 char stt[100];
 int k=0;
 i=0;
  while(st[i]==' ') i++;
  for(;i<strlen(st);i++)
   if((st[i]!=' ')||(st[i]==' '&&st[i-1]!=' '))
   {
    stt[k]=st[i];
    k++;
   }
  stt[k]='\0';
  strcpy(st,stt);
 printf("xau sau khi chuan hoa la:%s",st);
 /*cach hai:
 //chuan hoa dau
 i=0;
 while(st[i]==' '&&i<strlen(st)) i++;
 strcpy(&st[0],&st[i]);
 //chuan hoa o giua
 i=0;
 while(i<strlen(st)-1)
 if(st[i]==' '&&st[i+1]==' ')
  strcpy(&st[i],&st[i+1]);
 else
   i++;
 //chuan hoa o cuoi xau
 i=strlen(st)-1;
 while(st[i]==' ')
  i--;
  st[i+1]='\0';
 printf("xau sau chuan hoa la:%s",st);
 */
 getch();
}