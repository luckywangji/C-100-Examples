/*
**	题目：输入三个整数 x、y、z，请把这三个数由小到大输出。
*/

#include <stdio.h>

int main()
{
    int x, y, z;
    printf("输入第一个数：");
    scanf("%d", &x);
    printf("输入第二个数：");
    scanf("%d", &y);
    printf("输入第三个数：");
    scanf("%d", &z);

    if(x > y)
    {
        if(y > z)
        {
            printf("%d, %d, %d", x, y ,z);
        }
        else
        {
            if(x > z)
            {
                printf("%d, %d, %d", x, z ,y);
            }
            else
            {
                printf("%d, %d, %d", z, x ,y);
            }
        }
    }
    else
    {
        // x < y
        if(x < z)
        {
            if (y > z)
            {
                printf("%d, %d, %d", y, z ,x);
            }
            else
            {
                printf("%d, %d, %d", z, y ,x);
            }
        }
        else
        {
            printf("%d, %d, %d", y, x ,z);
        }
    }

    return 0;
}
