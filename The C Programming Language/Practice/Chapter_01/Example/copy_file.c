/**
 * Example: (P10) 将输入的字符一次一个地复制到输出
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 * Tips: 读一个字符
 *      while(该字符不是文件结束指示符)
 *      输出刚读入的字符
 *      读下一个字符
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }

    system("pause");
    return 0;
}