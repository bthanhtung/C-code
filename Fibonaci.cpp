#include<stdio.h>  
#include<conio.h>  

int main()  
{  
 int n1=0,n2=1,n3,i,k;  
  
 printf("Ban hay nhap so phan tu trong day Fibonacci: ");  
 scanf("%d",&k);  
 printf("\n%d %d",n1,n2);  //in hai so 0 va 1  
  
 for(i=2;i<k;++i)   //vong lap bat dau tu 2 boi vi 0 va 1 da duoc in 
 {  
  n3=n1+n2;  
  printf(" %d",n3);  
  n1=n2;  
  n2=n3;  
 }  
 return 0;
getch();  
}  
