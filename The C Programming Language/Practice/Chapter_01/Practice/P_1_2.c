/**
 * Practice: (P3)1-2 做个实验，当printf函数的参数字符串中包含\c（其中c是上面的转义字符序列中未曾列出的某个字符）时，观察一下会出现什么情况。
 * Author: Staick
 * Version: 1.0
 * Date: 2021-2-28
 * Answer: 结果中直接将c输出了出来
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // printf("hello world\c");  //vscode中会出现warning
    
    system("pause");
    return 0;
}