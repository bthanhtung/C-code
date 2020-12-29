#include<stdio.h>
int main () {

	printf("Find the maximum no. in array.\n");
	printf("------------------------------\n");
	int a[1000], max, i, N;
	printf("Enter size of array: "); scanf("%d",&N);
	printf("Enter element for the array: ");
	for(i = 0 ; i < N ; i++)
		scanf("%d", &a[i]);
		max = a[0];

	for(i=1; i<N ;i++) {
		if(max < a[i])
		max = a[i];
	}	
	printf("maximum is = %d\n", max);
	printf("Code by Bui Thanh Tung\n");
	return 0;	
}
