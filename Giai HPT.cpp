#include <stdio.h>
#include <conio.h>
 
int main() {
	printf("Giai he phuong trinh ax + by = c va dx + ey = f");
    float a, b, c,d, e, f;
    float Dx, Dy, D;
    printf("\n Nhap vao cac he so a, b, c, d, e, f : \n");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    D = a*e - b*d;
    Dx = c*e - b*f;
    Dy = a*f - c*d;
    printf("\n%fx + %fy = %f", a, b, c);
    printf("\n%fx + %fy = %f", d, e, f);
    if(D == 0 && Dx == 0)
        printf("\n He pt vo so nghiem");
    if(D == 0 && Dx != 0)
        printf("\n He pt vo nghiem");
    if(D != 0) {
        printf("\n He co nghiem");
        printf("\n x = %.3f", Dx/D);
        printf("\n y = %.3f", Dy/D);
    }
    getch();
}
