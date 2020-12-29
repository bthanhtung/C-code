#include<stdio.h>
#include<conio.h>
#include<math.h>

int main () {
	float a, b, x;
	printf("Nhap a = "); scanf("%f", &a);
	printf("Nhap b = "); scanf("%f", &b);
	if (a == 0)
		printf("Phuong trinh vo nghiem");
	if (b == 0)
		printf("Phuong trinh co nghiem dung voi moi x");
	else {
		x = (float)-b/a;
		printf("Nghiem cua phuong trinh la x = %.2f",x);
	}
	return 0;
}
