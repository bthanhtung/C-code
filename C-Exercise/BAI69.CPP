//chuong trinh ve xau ki tu
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
 clrscr();
 char st[200],tu[100];
 printf("nhap xau ki tu vao:");fflush(stdin);gets(st);
 printf("xau ki tu vua nhap vao la:%s",st);
 //chuan hoa xau ki tu vua nhap vao
 int i,j;
 //chuan hoa theo hai cach hoac copy sang xau moi,hoac lam thang
 i=0;
 while(st[i]==' ') i++;
 strcpy(&st[0],&st[i]);//dich chuyen ve phia dau xau
 //chuan hoa giua
 i=0;
 while(i<strlen(st)-1)
 if(st[i]==' '&&st[i+1]==' ')
  strcpy(&st[i],&st[i+1]);
  else i++;
 j=strlen(st)-1;
 while(st[j]==' '&&j>0)j--;
 st[j+1]='\0';
 printf("xau sau khi chuan hoa la:%s",st);
 //chu y:voi xau ki tu phai co ki tu ket thuc xau:\0 thi moi duoc
 //tach xau ban dau thanh cac tu luu vao mang
 char b[40][100];
 //mang gom 40 phan tu moi phan tu toi da 100 ki tu
 int k=0;
 for(i=0;i<strlen(st)-1;)
 {
   int d,c;
   d=i;
   while(d<strlen(st)&& st[d]==' ') d++;
   c=d;
   while(c<strlen(st) && st[c]!=' ') c++;
   int u,v;
   for(u=0,v=d;v<c;v++,u++)
   b[k][u]=st[v];
   b[k][u]='\0';//phai nho la co ki tu ket thuc xau
   k++;
   i=c;//phai co cai thay doi dieu kien
  }
  int n=k;
  for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
  if(stricmp(b[i],b[j])>0)
  {
   char tg[100];
   strcpy(tg,b[i]);
   strcpy(b[i],b[j]);
   strcpy(b[j],tg);
  }
  int d=1;
  for(i=1;i<n;i++)
  if(stricmp(b[i],b[i-1])!=0)  //ham so sanh thi phai la stricmp,strcmp(s1,s2)
     d++;
  printf("\n so tukhac nhau trong xau la:%d",d);

  d=0;
  strcpy(tu,b[0]);
  for(i=0;i<n;)
  {
     int t=0;
     j=i;
     while(j<n &&stricmp(b[j],b[i])==0)
     {
      j++;
      t++;
     }
    printf("\n t=%d",t);
    if(t>d)
    {
     d=t;
     strcpy(tu,b[i]);
    }
    i=j;
  }
 printf("\n tu xuat hien nhieu nhat trong xau la:%s\n",tu);
 printf("cac tu trong xau la:\n");
 for(i=0;i<n;i++)
 printf("\n%s",b[i]);
 //dem so tu bat dau bang T hoac G
 if(st[0]=='T'||st[0]=='G')
      d=1;
 else d=0;
 for(i=0;i<strlen(st)-1;i++)
  if(st[i]==' '&&(st[i+1]=='T' ||st[i+1]=='G')) d++;
  printf("\n so tu bat dau bang G hoac T la:%d",d);
  //nhap vao day lien tiep cac ki tu, dung nhap khi nhap vao day giong voi tu trong xau,hoac la do dai=10
  printf("\n nhap vao day ki tu:\n");
  char kt[100];
  k=0;
  int ok=1;
  do
  {
   kt[k]=getche();
   kt[k+1]='\0';//phai luon co ki tu ket thuc xau
   //tach thanh tung tu roi so sanh
   /*
   for(i=0;i<n;i++)
   if(stricmp(b[i],kt)==0)
    {
     printf("vi tri cua day ki tu vua nhap la:%d",i);
     ok=0;
    }
    */
    for(i=0;i<strlen(st); )
    {
      char tu1[100];
      int d,c,u,v;
      d=i;
      while(st[d]==' ') d++;
      c=d;
      while(st[c]!=' '&&c<strlen(st)) c++;
      for(v=0,u=d;u<c;u++,v++)
      tu1[v]=st[u];
      tu1[v]='\0';
      if(stricmp(tu1,kt)==0)
      {
       printf("\n vi tri cua day ki tu nay la:%d",d);
       ok=0;
       break;
       }
      i=c;
    }

    if(k+1==10)
     ok=0;
    k++;
   }
  while(ok);
  printf("day ki tu ban nhap vao la:%s",kt);
 getch();
}