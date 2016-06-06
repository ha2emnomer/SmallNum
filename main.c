#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mathext.h"
long KaratsubaAlg(long x, long y)
{
    int base =10;
    int m=0;
    if(x>=y)
    {
     m=numDigits(y)-1;
    }
    else
    {
    m=numDigits(x)-1;

    }
    int  b= pow(base,m);
    int  x1 = x / b;
    int  y1 = y / b;
    int  x0 = x - (x1*b);
    int  y0 = y - (y1*b);
    long z2 = x1*y1;
    long z0= x0*y0 ;
    long z1= (x1+x0)*(y1+y0)-z2-z0;
    return (z2*Power(base,2*m)+(z1*b)+z0);

}
int main()
{
    long x , y;
    scanf("%ld %ld",&x , &y);
    printf("%ld", KaratsubaAlg(x,y));
    return 0;
}
