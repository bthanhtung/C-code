#include <stdio.h>
#include <conio.h>
int main()
{
      int a,b,i;
      printf("a=");
      scanf("%d", &a);
      printf("b=");
      scanf("%d", &b);
      if(a<b)
      for(i=a;i>=1;i--)
         if(a%i==0&&b%i==0)
         {
         printf("UCLN la %d", i);
         break;
         }
      if(b<a)
      for(i=b;i>=1;i--)
         if(a%i==0&&b%i==0)
         {
         printf("UCLN la %d", i);
         break;
         }
getch();
return 0;
}
