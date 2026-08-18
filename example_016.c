/*
**	题目：输入两个正整数m和n，求其最大公约数和最小公倍数。 
*/

#include <stdio.h>

int main()
{
    int n, m, t;
    int c, r;
    printf("请输入两个数字：\n");
    scanf("%d%d", &n, &m);

    if (n < m)
    {
        t = n;
        n = m;
        m = t;
    }
    r = n * m;
    while (n % m)
    {
        c = n % m;
        n = m;
        m = c;
    }

    printf("这两个数的最大公约数是%d，最小公倍数是%d\n", c, r / c);
    return 0;
}
