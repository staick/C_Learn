/**
 * Example: (P14) 统计输入的行数、单词数与字符数
 * Author: Staick
 * Version: 1.0
 * Date: 2021-3-1
 * Tips: 通过设置一个变量表示c是否在单词内来统计单词的个数
 */

#include <stdio.h>
#include <stdlib.h>

#define IN  1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;

    nl = nw = nc = 0;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if ( c == '\n' || c == '\t' || c == ' ')
        {
            state = OUT;
        }
        else if(state == OUT)
        {
            state = IN;
            ++nw;
        }

    }

    printf("nl = %d\tnw = %d\tnc = %d\n", nl, nw, nc);

    system("pause");
    return 0;
}