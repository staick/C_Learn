/**
 * Practice: (P13)1-10 ��дһ�������븴�Ƶ�����ĳ��򣬲������е��Ʊ���滻Ϊ\t�������˷��滻Ϊ\b������б���滻Ϊ\\�������Ϳ��Խ��Ʊ���ͻ��˷��Կɼ��ķ�ʽ��ʾ������
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            printf("\\t");
        }
        else if (c == '\b')
        {
            printf("\\b");
        }
        else if (c == '\\')
        {
            printf("\\\\");
        }
        else
        {
        putchar(c);
        }
    }

    system("pause");
    return 0;
}