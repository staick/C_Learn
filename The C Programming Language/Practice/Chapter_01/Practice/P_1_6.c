/**
 * Practice: (P11)1-6 ��֤���ʽgetchar() != EOF��ֵ��0����1
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 * Answer: ��������������Ϊ1�����ʹ��Ctrl+Z��ģ��EOF����Ϊ0
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = (getchar() != EOF);
    printf("%d\n", c);

    system("pause");
    return 0;
}