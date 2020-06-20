#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d,e;
        printf("Nhap vao so a:");
        scanf("%d",&a);
if(a>0 && a<86399)
{
    b=a/3600; //in ra gio//
    c=a%3600;
    d=c/60;   // phut //
    e=c%60; // giay //
}
        printf(" DONG HO ");
    printf(" Gio:Phut:Giay %02d:%02d:%02d ",b,d,e); // 02 ? dây là in ra 2 s?
getch();
return 0;
}
