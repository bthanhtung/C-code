//bai 14:ho ten,ten,doi chu dau thanh hoa,chuan hoa,sap xep ten cua day nguoi
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main()
{
  clrscr();
  char ht[100],ten[100],htc[100];
  int i,j;
  printf("nhap ho ten vao:");fflush(stdin);gets(ht);
  j=strlen(ht)-1;
  while(ht[j]==' ') j--;
  i=j;
  while(ht[i]!=' ') i--;
  int k=0;
  for(int t=i+1;t<=j;t++)
  {
   ten[k]=ht[t];
   k++;
   }
  //sau do phai danh dau ket thuc xau bang \0
  ten[k]='\0';
  printf("\n ten cua nguoi vua nhap vao la:%s",ten);
  //loai bo cac khoang trong vo nghia
  j=strlen(ht)-1;
  while(ht[j]==' ') j--;
   k=0;i=0;
  while(ht[i]==' ') i++;
  for(;i<=j;i++)
  if((ht[i]!=' ')||(ht[i]==' ' && ht[i-1]!=' '))
   {
    htc[k]=ht[i];
    k++;
   }
   htc[k]='\0';
 strcpy(ht,htc);
 printf("\n ho ten sau khi chuan hoa la:%s\n",ht);
 //viet hoa chu cai dau cua ho ten
 if(ht[0]!=' ') ht[0]=toupper(ht[0]);
 for(i=0;i<strlen(ht)-1;i++)
 if(ht[i]==' ' && ht[i+1]!=' ')
  ht[i+1]=toupper(ht[i+1]);
  printf("\n ho ten sau khi viet hoa chu cai in dau la:\n");
  for(i=0;i<k;i++)
  printf("%c",ht[i]);
 //nhap vao day ho ten va sap xep thi phai tach ten sau do moi sap xep
 //chu y:sau khi tach duoc tung ten thi phai them ki tu ket thuc xau vao
  char a[50][50],tt[50][50];//mang gom co 50 xau moi xau co toi da 50 ki tu
  int n;
  printf("nhap vao danh sach ho ten:\n");
  printf("nhap so nguoi vao:n=");scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    fflush(stdin);
    printf("\n nguoi thu %d:",i+1);
    gets(a[i]);
  }
 //tach ten cua nguoi
 for(i=0;i<n;i++)
 {
  int d,c;
  c=strlen(a[i])-1;
  while(c>0 && a[i][c]==' ')  c--;
  d=c;
  while(a[i][d]!=' ') d--;
  int k=0;
   for(int u=d+1;u<=c;u++)
   {
    tt[i][k]=a[i][u];
    k++;
    }
   tt[i][k]='\0';//phai co ki tu ket thuc xau
 }
 printf("danh sach ten cua nhung nguoi vua nhap vao la:\n");
 for(i=0;i<n;i++)
 printf("\n %s",tt[i]);
 //sap xep theo ten
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++)
  if(stricmp(tt[i],tt[j])>0)
  {
   char tg[50];
   strcpy(tg,tt[i]);
   strcpy(tt[i],tt[j]);
   strcpy(tt[j],tg);
    strcpy(tg,a[i]);
   strcpy(a[i],a[j]);
   strcpy(a[j],tg);
   }
  printf("danh sach ten sau khi sap xep la:\n");
 for(i=0;i<n;i++)
 printf("\n %s",a[i]);
 getch();
}