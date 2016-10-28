#include <stdio.h>
#include <stdlib.h>

int main()
{
    int IntDigit;
    char Symbol;
    printf("Insert Integer numeric and symbol after 'space'\n");
    scanf("%d %c", &IntDigit, &Symbol);
    printf("Integer: %d \nSymbol: %c", IntDigit, Symbol);
    return 0;
}
