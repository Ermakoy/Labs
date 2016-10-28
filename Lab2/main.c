#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x,y,z1,z2;
    scanf("%lf %lf",&x,&y);
    z1=pow(cos(x),4)+pow(sin(y),2)+pow(sin(2*x),2)*0.25-1;
    z2=sin(x+y)*sin(y-x);
    printf("z1 = %lf \nz2 = %lf",z1,z2);
    return 0;
}
