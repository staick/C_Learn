/**
 * Practice: (P9)1-5 �޸��¶�ת������Ҫ�������򣨼����մ�300�ȵ�0�ȵ�˳�򣩴�ӡ�¶�ת����
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));

    system("pause");
    return 0;
}
