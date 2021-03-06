/**
 * Practice: (P15)1-12 ��дһ��������ÿ��һ�����ʵ���ʽ��ӡ�����롣
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
            // putchar('\n');   //���ڴ�ӡ��һ������ʱ���ӡһ������
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