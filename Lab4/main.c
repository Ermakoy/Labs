#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int Digit;
    bool Segment;
    scanf("%d",&Digit); //���� �����
    Segment = (Digit > -56)&&(Digit < 56); //�������� �� �������������� �������
    printf("%d\n",Segment);
    scanf("%d",&Digit);
    printf("%d", (Digit >>7) && 1); //����� �������� ���� �����
    return 0;
}
