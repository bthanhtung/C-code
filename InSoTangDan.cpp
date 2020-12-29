#include <stdio.h>

int main() {
   int i, start, end;

printf("Nhap so start = "); scanf("%d", &start);
printf("Nhap so end = "); scanf("%d", &end);

   printf("In cac so theo thu tu tang dan:\n");
   for(i = start; i <= end; i++) 
      printf("%2d\n", i);

   return 0;
}
