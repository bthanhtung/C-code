#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct bn
      {
       char ht[100],dc[100],kdt[100],t[100];
       int sn;
      };
void main()
{
 clrscr();
 bn a[100];
 int n,i,snn;
 float tv;
 printf("nhap so benh nhan vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n %d:ho ten:",i+1);fflush(stdin);gets(a[i].ht);
  printf("dia chi:");fflush(stdin);gets(a[i].dc);
  printf("khoa dieu tri:");fflush(stdin);gets(a[i].kdt);
  printf("so ngay nam vien:sn=");scanf("%d",&snn);
  a[i].sn=snn;
 }
 //tim dieu kien la khoa ngoai
 printf("\n benh nhan o khoa ngoai la:\n");
 for(i=0;i<n;i++)
 if(stricmp(a[i].kdt,"khoa ngoai")==0)
  printf("\n ho ten:%s dia chi:%s so ngay nam vien:%d",a[i].ht,a[i].dc,a[i].sn);
  //tim kiem benh nhan theo ten
  char ten[100];
  int d=0;
  printf("\n nhap ten benh nhan can tim kiem:");fflush(stdin);gets(ten);
  for(i=0;i<n;i++)
  {
    int k,j;
    k=strlen(a[i].ht)-1;
    while(a[i].ht[k]==' ') k--;
    j=k;
    while(a[i].ht[j]!=' ') j--;
    j++;
    if(k-j+1==strlen(ten) && a[i].ht[j]==ten[0])
     {
       int ok=1;
       for(int u=1;u<strlen(ten);u++)
       if(a[i].ht[j+u]!=ten[u])
       {
	ok=0;
	break;
       }
      if(ok)
      {
	d++;
	printf("thong tin ve benh nhan %s la:\n");
	printf("\n ho ten:%s dia chi:%s so ngay nam vien:%d",a[i].ht,a[i].dc,a[i].sn);
       }
     }
    }
   if(d==0) printf("khong tim thay benh nhan nay");
   //sap xep ho ten theo chieu tang
   //lam y nay truoc thi khi nhap ten thi chi can so sanh
   for(i=0;i<n;i++)
   {
     int k,d,u,c=strlen(a[i].ht)-1;
     while(c>0 &&a[i].ht[c]==' ') c--;
     d=c;
     while(a[i].ht[d]!=' ') d--;
     d++;
     for(k=0,u=d;u<=c;u++,k++)
     a[i].t[k]=a[i].ht[u];
     //phai them ki tu ket thuc xau
     a[i].t[k]='\0';
   }
   //sap xep
   for(i=0;i<n-1;i++)
   for(int j=i+1;j<n;j++)
   if(stricmp(a[i].t,a[j].t)>0)
   {
    bn tg=a[i];
    a[i]=a[j];
    a[j]=tg;
   }
   printf("\n danh sach sau khi sap xep theo chieu tang cua ho ten la:\n");
   for(i=0;i<n;i++)
   printf("\n ho ten:%s dia chi:%s so ngay nam vien:%d",a[i].ht,a[i].dc,a[i].sn);

   getch();
}