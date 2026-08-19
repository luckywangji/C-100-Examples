/*
**	题目：求 s=a+aa+aaa+aaaa+aa...a 的值，其中 a 是一个数字，例如 2+22+222+2222+22222 (此时共有5个数相加)，几个数相加有键盘控制。
*/

#include <stdio.h>

int main()
{
    int base, terms;
	int  temp;
	int sum = 0;
    
    printf("请输入整数 a 和 n（例如 2 和 5）：\n");
    scanf("%d%d", &base, &terms);

    temp = base;

    for (int i = 0; i < terms; i++)
    {
    	sum += temp;
        base *= 10;
        temp += base;
    }

    printf("计算结果为：%d\n", sum);

    return 0;
}
