/*
**	题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
*/

#include <stdio.h>

int main()
{
    float high, sum;
    int i;

    high = 100;
    sum = 100;


    for(i = 0; i < 10; i++)
    {
        sum = high + sum;

        high = high / 2;

    }

    printf("第%d次落地时，共经过%.5f米，第%d次反弹高%.5f米\n", i, sum, i, high);
    return 0;
}
