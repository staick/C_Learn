/**
 * Practice: (P11)1-6 验证表达式getchar() != EOF的值是0还是1
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 * Answer: 在有输入的情况下为1，如果使用Ctrl+Z来模拟EOF，则为0
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = (getchar() != EOF);
    printf("%d\n", c);

    system("pause");
    return 0;
}