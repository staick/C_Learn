/**
 * Example: (P12) ͳ��������ַ���
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long nc = 0;

    while (getchar() != EOF)
    {
        ++nc;
    }
    printf("There are %ld charactors.\n", nc);
    
    system("pause");
    return 0;
}