/*
**	题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
**	小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
*/

#include <stdio.h>

int main()
{
    int rubbitSum = 1, lastMonthRubbitCount = 1, monthTime;
//    int currentRubbitCount = 1;
    printf("%11d%11d", rubbitSum,rubbitSum);
    for(monthTime = 2; monthTime < 40; monthTime++)
    {
//        rubbitSum = lastMonthRubbitCount + currentRubbitCount;
//        currentRubbitCount = rubbitSum;
//        lastMonthRubbitCount = currentRubbitCount - lastMonthRubbitCount;

        // 代码重构 
        rubbitSum += lastMonthRubbitCount;
        lastMonthRubbitCount = rubbitSum - lastMonthRubbitCount;
        printf("%11d", rubbitSum);

        if((monthTime+1)%4 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}
