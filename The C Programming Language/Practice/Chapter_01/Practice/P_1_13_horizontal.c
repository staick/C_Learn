/**
 * Practice: (P17)1-13 ��дһ�����򣬴�ӡ�����е��ʳ���ˮƽ�����ֱ��ͼ��
 * Author: Staick
 * Version: 1.0
 * Date: 2021-3-1
 * Tips: ��
 */

#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

#define IN      1
#define OUT     0
#define MAXHIST 15  //ֱ��ͼ����߸߶�
#define MAXWORD 11  //���ʵ���󳤶�

int main()
{
    int c, nc, state;
    int maxvalue;
    int len;
    int ovflow;
    int wl[MAXWORD] = {0};
    setlocale(LC_CTYPE, "");
    wchar_t square = 9612;
    nc = 0;
    ovflow = 0;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
            if (nc > 0)             //���ʽ���
            {
                if (nc < MAXWORD)
                {
                    ++wl[nc];
                }
                else
                {
                    ++ovflow;
                }
            }
            nc = 0;
        }
        else if(state == OUT)
        {
            state = IN;
            nc = 1;
        }
        else
        {
            ++nc;
        }
    }

    maxvalue = 0;
    for (int i = 1; i < MAXWORD; ++i)
    {
        if (wl[i] > maxvalue)
        {
            maxvalue = wl[i];
        }
    }
    for (int i = 1; i < MAXWORD; ++i)
    {
        printf("%5d - %5d : ", i, wl[i]);
        if(wl[i] > 0)
        {
            if((len = wl[i] / maxvalue * MAXHIST) <= 0)
            {
                len = 1;
            }
        }
        else
        {
            len = 0;
        }
        while (len > 0)
        {
            wprintf(L"%lc", square);
            --len;
        }
        putchar('\n');
    }

    if (ovflow > 0)
    {
        printf("��%d�����ַ���������%d������ˡ�", ovflow, MAXWORD);
    }


    system("pause");
    return 0;
}