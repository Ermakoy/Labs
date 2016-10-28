#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int Digit;
    bool Segment;
    scanf("%d",&Digit); //Ввод числа
    Segment = (Digit > -56)&&(Digit < 56); //Проверка на принадлежность отрезку
    printf("%d\n",Segment);
    scanf("%d",&Digit);
    printf("%d", (Digit >>7) && 1); //Вывод восьмого бита числа
    return 0;
}
