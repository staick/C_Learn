/**
 * Practice: (P8)1-3 修改温度转换程序，是只能在转换表的顶部打印一个标题。
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

    printf("华氏温度-设置温度对照表\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);    //℃ = (5 / 9) * (℉ - 32)
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }

    system("pause");
    return 0;
}