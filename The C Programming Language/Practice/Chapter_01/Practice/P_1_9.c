/**
 * Practice: (P13)1-9 编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替。
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, last;

    last = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (last == 0)
            {
                last = 1;
                putchar(c);
            }
        }
        else
        {
            last = 0;
            putchar(c);
        }
    }

    system("pause");
    return 0;
}