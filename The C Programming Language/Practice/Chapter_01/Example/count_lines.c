/**
 * Example: (P13) ͳ�����������
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 * Tips: ͳ������ĺ�������ͨ��ͳ��\n�ַ��ĸ���ʵ��
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