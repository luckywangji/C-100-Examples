/*
**	题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
*/

#include <stdio.h>

int is_sqrtnum(int i)
{
    int j;
    for ( j = 1; j < i; j++ )
    {
        if(j*j == i)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num;
    int i;
    for ( i = 1; i < 65535; i++)
    {
        if(is_sqrtnum(i+100) && is_sqrtnum(i+268))
        {
            num = i;
            break;
        }
    }
    printf("该数是：%d", num);
    return 0;
}
