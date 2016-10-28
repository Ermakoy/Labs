#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Digit,SecondDigit;
    scanf("%d",&Digit); //Задание 1. Считывание целого числа в десятичной СС
    printf("\n8 scale system :%o\n",Digit); //Задание 2.Вывод числа в восьмеричной СС
    printf("16 system scale:%x 4 byte right shift:%x\n",Digit,Digit >> 4); //Задание 3. Вывод числа в 16 СС и этого же числа со сдвигом на 4 бита вправо
    printf("16 system scale:%x Negation:%x\n",Digit,!Digit); //Задание 4. Вывод числа в 16'ной СС и вывод этого же числа С побитовой операцией отрицания
    scanf("%x",&SecondDigit);
    printf("\nXOR : %x",SecondDigit ^ Digit); //Вывод XOR Первого и второго числа
    return 0;
}
