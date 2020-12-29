#include<stdio.h>
int main() {
	printf("Calculate sum of 10 element of array & show the average\n");
	printf("-------------------------------------------------------\n");
	int a[10], i, sum = 0;
	float av;
	printf("Enter element of an array: ");
	for(i = 0 ; i < 10 ; i++)
	scanf("%d",&a[i]);
	for( i = 0 ; i < 10 ; i++)
	sum = sum + a[i];
	printf("Sum = %d\n",sum);
	av = (float)sum/10;
	printf("Average = %.2f", av);
	printf("\nCode by Bui Thanh Tung");
	return 0;
}
