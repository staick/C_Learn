/**
 * Practice: (P8)1-4 ��дһ�������ӡ�����¶�ת��Ϊ��Ӧ�����¶ȵ�ת����
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celisus, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celisus = lower;
    while (celisus <= upper)
    {
        fahr = celisus / (5.0 / 9.0) + 32;     //�H = �� / (5 / 9) + 32
        printf("%3.0f %6.1f\n", celisus, fahr);
        celisus += step;
    }

    system("pause");
    return 0;
}


