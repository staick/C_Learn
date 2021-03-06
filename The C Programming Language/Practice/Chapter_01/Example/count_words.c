/**
 * Example: (P14) ͳ����������������������ַ���
 * Author: Staick
 * Version: 1.0
 * Date: 2021-3-1
 * Tips: ͨ������һ��������ʾc�Ƿ��ڵ�������ͳ�Ƶ��ʵĸ���
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