/*
**	题目：将一个正整数分解质因数。例如：输入 90,打印出 90=2*3*3*5。
*/

#include <stdio.h>

int main()
{
    int n, k;
    printf("输入一个正整数：");
    scanf("%d", &n);
    printf("%d = ", n);

    for(k = 2; k <= n; )
    {
        if(n % k == 0 )
        {
            n = n / k;
            if(n == 1)
            {
                printf("%d", k);
            }
            else
            {
                printf("%d*", k);
            }
        }
        else
        {
            k = n % k + k;
        }
    }
    return 0;
}

