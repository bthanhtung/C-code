#include<math.h>
#include<conio.h>
#include<stdio.h>

int main() {
   float a, b, c, delta;
   printf("Nhap a = ") ;
   scanf("%f", &a);
   printf("Nhap b = "); scanf("%f", &b) ;
   printf("Nhap c = "); scanf("%f", &c) ; 
   delta = b*b - 4*a*c ;
   if (delta < 0)
      printf("Phuong trinh vo nghiem") ;
   else if (delta == 0)
           printf("Phuong trinh co nghiem kep x1 = x2 = %0.2f", -b/(2*a)) ;
         else {
            printf ("Phuong trinh co 2 nghiem phan biet:\n x1 = %0.2f", (-b + sqrt(delta))/(2*a)) ;
            printf ("\nx1 = %0.2f", (-b - sqrt(delta)) / (2*a)) ;
         }
   return 0 ;
   getch() ;
}
