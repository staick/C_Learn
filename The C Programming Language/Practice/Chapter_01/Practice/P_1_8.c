/**
 * Practice: (P13)1-8 编写一个统计空格、制表符与换行符个数的程序
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    long ns, nt, nl;
    
    ns = nt = nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++ns;
        }
        else if (c == '\t')
        {
            ++nt;
        }
        else if (c == '\n')
        {
            ++nl;
        }
    }

    printf("ns = %ld, nt = %ld, nl = %ld\n", ns, nt, nl);

    system("pause");
    return 0;
}