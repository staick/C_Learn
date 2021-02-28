/**
 * Example: (P12) 统计输入的字符数
 * Author: Staick
 * Version: 2.0
 * Date: 2021-2-28
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("There are %.0f charactors.\n", nc);
    
    system("pause");
    return 0;
}