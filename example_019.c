/*
**	题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"，例如 6=1＋2＋3 ，请编程找出 1000 以内的所有完数。
*/

#include <stdio.h>

int main()
{
    int i, j, recond;

    for(i = 3; i < 1000; i++)
    {
        recond = 0;
        for(j = 1; j < i / 2 + 1; j++)
        {
            if(i % j == 0)
            {
                recond += j;
            }
        }
        if(i == recond)
        {
            printf("%d = 1", i);
            // 打印其他因子
            for (j = 2; j < i / 2 + 1; j++)
            {
                if (i % j == 0)
                {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
