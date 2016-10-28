#include <stdio.h>
#include <stdlib.h>
#include <math.h>
enum Lamp {
    incandescent,daylight,halogen
    };
struct row
    {
        float x1; float y1;
        float x2; float y2;
        float x3; float y3;
    };
struct bitfield
    {
        unsigned int on:1;
        unsigned int SD:1;
        unsigned int CF:1;
        unsigned int OO:1;
    };
union Work
    {
        unsigned int value;
        struct bitfield bitfield1;
    };
int main()
{
    enum Lamp a = incandescent;
    float P;
    struct row triangle;
    union Work n;
    printf("Type of lamp : %d\n",a);
    triangle.x1=0; triangle.y1=0;
    triangle.x2=0; triangle.y2=3;
    triangle.x3=4; triangle.y3=0;
    P=sqrt(pow( (triangle.x1 - triangle.x2 ), 2) + pow( (triangle.y1 - triangle.y2) , 2)) + sqrt(pow( (triangle.x2 - triangle.x3) , 2) + pow( (triangle.y2 - triangle.y3) , 2)) + sqrt(pow( (triangle.x3 - triangle.x1) , 2) + pow( (triangle.y3 - triangle.y1) , 2));
    printf("Perimetr = %f\n",P);
    scanf("%x",&n.value);
    printf("On/Off = %d\nSD = %d\nCF = %d\nMS = %d",n.bitfield1.on,n.bitfield1.SD,n.bitfield1.CF,n.bitfield1.OO);
    return 0;
}
