/*
1
2 4
1 3 5
2 4 6 8
1 4 5 7 9
*/
#include <stdio.h>
int main ()
{
	int i, j, k, n ;
	printf("Enter number of rows; "); scanf("%d",n);
	for(i = 1 ; i <= n ; i++)
	{
	if( i%2 == 0)
	k = 2;
	else 
	k = 1 ;
	for(j = 1 ; j <= i ; j++, k+=2);
	{
		printf("%d ",k);
	}
	printf("\n");
	}
return 0;
}
