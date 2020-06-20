#include<stdio.h>
#include<conio.h>
#include<dos.h>
int kt(int a[20][20],int n)
{
  int s=0,s1,s2;
 for(int i=0;i<n;i++)
 s+=a[i][i]; //tong cac phan tu tren duong cheo chinh
 int ok=1,k;
 for(k=0;k<n;k++)
 {
  s1=s2=0;
  for(i=0;i<n;i++)
  {
   s1+=a[k][i]; //tong hang k
   s2+=a[i][k];// tong cot k
   }
   if(s!=s1 || s!=s2)
     {
     ok=0;
     break;
    }
 }
  return ok;
}
void xuat(int a[20][20],int n)
{
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  printf("%3d",a[i][j]);
  printf("\n\n\n");
 }
}
void main()
{
 clrscr();
 int a[20][20],n,i,j;
 printf("nhap kich thuoc cua ma tran vao:n=");scanf("%d",&n);
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
  printf("a[%d][%d]=",i,j);
  scanf("%d",&a[i][j]);
  }
 printf("ma tran vua nhap vao la:\n");
 xuat(a,n);
 //kiem tra xem co phai la ma tran ma phuong hay khong
 //tong cac phan tu tren hang=tren cot=duong cheo chinh

  if(kt) printf("ma tran la ma tran ma phuong");
  else printf("\n ma tran khong phai la ma tran ma phuong");
  //kiem tra xem ma tran co ma tran con nao la ma tran ma phuong hay khong
   printf("\n tim ma tran con la ma tran ma phuong:\n");
   int k,ic,jc,i1,j1;
   for(k=2;k<n;k++) //duyet cac ma tran co k
    for(i=0;i<=n-k;i++)
     for(j=0;j<=n-k;j++)
     {
	int c[20][20];
	for(ic=0,i1=i;i1<i+k;i1++,ic++)
	for(jc=0,j1=j;j1<j+k;j1++,jc++)
	 c[ic][jc]=a[i1][j1];
       if(kt(c,k))
	 {
	  printf("\n ma tran con la ma phuong:\n");
	  xuat(c,k);
	  getch();
	 }

     }
  printf("tim phan tu yen ngua trong ma tran:");
  //ptu yen ngua la phan tu lon hon cac phan tu canh no
  for(i=1;i<n;i++)
   for(j=1;j<n;j++)
   if(a[i][j]>a[i][j-1]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i+1][j])
   {
    printf("\n %d la phan tu yen ngua",a[i][j]);
    printf("\n vi tri cua no la:hang:%d cot:%d",i,j);
    }
   //xet cac phan tu o goc
   if(a[0][0]>a[0][1]&&a[0][0]>a[1][0])
    printf("\n %d la phan tu yen ngua o hang:%d cot:%d",a[0][0],0,0);

   if(a[0][n-1]>a[0][n-2]&&a[0][n-1]>a[1][n-1])
    printf("\n %d la phan tu yen ngua o hang:%d cot:%d",a[0][n-1],0,n-1);
     if(a[n-1][0]>a[n-2][0]&&a[n-1][0]>a[n-1][1])
    printf("\n %d la phan tu yen ngua o hang:%d cot:%d",a[n-1][0],n-1,0);
      if(a[n-1][n-1]>a[n-1][n-2]&&a[n-1][n-1]>a[n-2][n-1])
    printf("\n %d la phan tu yen ngua o hang:%d cot:%d",a[n-1][n-1],n-1,n-1);
  //cac phan tu o ria
   for(j=1;j<n-1;j++)
   {
    if(a[0][j]>a[0][j-1]&&a[0][j]>a[0][j+1]&&a[0][j]>a[1][j])
    printf("\n %d la phan tu yen ngua o vi tri:hang :%d cot:%d",a[0][j],0,j);
    if(a[n-1][j]>a[n-1][j-1]&&a[n-1][j]>a[0][j+1]&&a[n-1][j]>a[n-2][j])
    printf("\n la phan tu yen ngua o vi tri:hang :%d cot:%d",a[n-1][j],n-1,j);
    }
    for(j=1;j<n-1;j++)
   {
    if(a[j][0]>a[j-1][0]&&a[j][0]>a[j+1][0]&&a[j][0]>a[j][1])
    printf("\n la phan tu yen ngua o vi tri:hang :%d cot:%d",a[j][0],j,0);
    if(a[j][n-1]>a[j-1][n-1]&&a[j][n-1]>a[j+1][0]&&a[j][n-1]>a[j][n-2])
    printf("\n la phan tu yen ngua o vi tri:hang :%d cot:%d",a[n-1][j],n-1,j);
    }
   getch();
}
