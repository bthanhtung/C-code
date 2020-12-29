#include<stdio.h>
#include<math.h>
int main() {
	float a, b, c, S, Cv, p;
	printf("Nhap a = "); scanf("%f", &a);
	printf("Nhap b = "); scanf("%f", &b);
	printf("Nhap c = "); scanf("%f", &c);
	if((a<b+c) && (b<a+c) && (c<a+c))	{
		printf("Thoa man dk 3 canh cua tam giac");
		Cv = a + b + c;
		p = Cv/2 ;
		S= sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Chu vi tam giac la %.2f",Cv);
		printf("Dien tich tam giac la %.2f",S);
	} else printf("Ba canh tren khong phai la 1 tam giac");
	return 0;
}
	
