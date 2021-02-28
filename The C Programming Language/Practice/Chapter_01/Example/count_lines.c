/**
 * Example: (P13) 统计输入的行数
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 * Tips: 统计输入的函数可以通过统计\n字符的个数实现
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    long nl = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }

    printf("There are %ld lines.", nl);

    system("pause");
    return 0;
}