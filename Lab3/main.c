#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Digit,SecondDigit;
    scanf("%d",&Digit); //������� 1. ���������� ������ ����� � ���������� ��
    printf("\n8 scale system :%o\n",Digit); //������� 2.����� ����� � ������������ ��
    printf("16 system scale:%x 4 byte right shift:%x\n",Digit,Digit >> 4); //������� 3. ����� ����� � 16 �� � ����� �� ����� �� ������� �� 4 ���� ������
    printf("16 system scale:%x Negation:%x\n",Digit,!Digit); //������� 4. ����� ����� � 16'��� �� � ����� ����� �� ����� � ��������� ��������� ���������
    scanf("%x",&SecondDigit);
    printf("\nXOR : %x",SecondDigit ^ Digit); //����� XOR ������� � ������� �����
    return 0;
}
