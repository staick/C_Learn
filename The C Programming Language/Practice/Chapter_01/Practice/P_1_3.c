/**
 * Practice: (P8)1-3 �޸��¶�ת��������ֻ����ת����Ķ�����ӡһ�����⡣
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("�����¶�-�����¶ȶ��ձ�\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);    //�� = (5 / 9) * (�H - 32)
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }

    system("pause");
    return 0;
}