#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    double Array[4];
    int i;
    int *Sign=Array;
    for(i=0;i<4;i++)
    {
        scanf("%f",&Sign[i]);
    }
    for(i=0;i<4;i++)

    {
        printf("%f ",Sign[i]);
    }
    printf("\n");
    Sign=malloc(4*sizeof(double));
    for(i=0;i<4;i++)
    {
        scanf("%f",&Sign[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("%f ",Sign[i]);
    }
    free(Sign);
    return 0;
}
