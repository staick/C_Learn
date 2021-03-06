/**
 * Example: (P15) ͳ�Ƹ������֡��հ׷��������ַ����ֵĴ���
 * Author: Staick
 * Version: 1.0
 * Date: 2021-3-1
 * Tips: ͨ�������Ÿ������ֳ��ֵĴ�����
 */

#include <stdio.h>
#include <stdio.h>

int main()
{
    int c, nwhite, nother;
    int ndigit[10] = {0};

    nwhite = nother = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0'];
        }
        else
        {
            ++nother;
        }
    }
    
    printf("ndigit =");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d", ndigit[i]);
    }
    printf("\tnwhite = %d\tnother = %d\n", nwhite, nother);

    system("pause");
    return 0;
}