#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char S1[20],S2[20];
    char Symbol;
    scanf("%s",S1);
    getchar();
    scanf("%s",S2);
    getchar();
    //Task1
    printf("%s\n",strcat(S1,S2));
    //Task3
    printf("%d\n",strcmp(S1,S2));
    //Task8
    printf("Input the symbol:");
    scanf("%c",&Symbol);
    if (strchr(S1,Symbol)==NULL) printf("Not found in 1st string\n");
        else printf("Found, on %d position in 1st string\n", strchr(S1,Symbol) - S1 + 1);
    if (strchr(S2,Symbol)==NULL) printf("Not found in 2nd string\n");
        else printf("Found, on %d position in 2nd string\n", strchr(S2,Symbol) - S2 + 1);
    //Task10
    if (strpbrk(S1,S2)) printf("Found - %c\n", S2[strpbrk(S1,S2) - S1 + 1]);
        else printf("Not found\n");
    //Task12
    printf("%d",strcspn(S1,S2));
    return 0;
}
