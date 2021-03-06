/**
 * Practice: (P15)1-12 编写一个程序，以每行一个单词的形式打印其输入。
 * Author: Staick
 * Version: 1.0
 * Date: 2021-3-1
 */

#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                putchar('\n');
                state = OUT;
            }
        }
        else if (state == OUT)
        {
            state = IN;
            // putchar('\n');   //会在打印第一个单词时多打印一个空行
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }

    system("pause");
    return 0;
}