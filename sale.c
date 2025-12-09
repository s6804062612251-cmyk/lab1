#include <stdio.h>

int main()
{
    float a,b,c;
    scanf ("%f",&a);
    printf ("%.2f\n",a*95/100*107/100);
    scanf ("%f",&b);
    printf ("%.2f\n",(a+b)*85/100*107/100);
    scanf ("%f",&c);
    printf ("%.2f\n",(a+b+c)*70/100*107/100);

    return 0;
}
