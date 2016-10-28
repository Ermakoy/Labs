#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Array[10] = {77,12,74,34,56,78,234,678},Matrix1[2][2]={2,1,1,3}, Matrix2[2][2]={1,2,3,1},MatrixX[2][2],i,j,k;
    for(i=0;i<10;i++)
    {
        printf("%d ",Array[i]);
    }
    printf("\n");
    for(i = 0; i < 2; i++)
    {
    for(j = 0; j < 2; j++)
    {
        printf("%d ",Matrix1[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    for(i = 0; i < 2; i++)
    {
    for(j = 0; j < 2; j++)
    {
        printf("%d ",Matrix2[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
    {
        MatrixX[i][j] = 0;
        for(k = 0; k < 2; k++)
            MatrixX[i][j] += Matrix1[i][k] * Matrix2[k][j];
    }
    for(i = 0; i < 2; i++)
    {
    for(j = 0; j < 2; j++)
    {
        printf("%d ",MatrixX[i][j]);
    }
    printf("\n");
    }
    return 0;
}
