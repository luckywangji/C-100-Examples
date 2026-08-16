/*
**	题目：输入某年某月某日，判断这一天是这一年的第几天？
*/

#include <stdio.h>

int main()
{
    int days, year, mount;
    printf("输入年份：");
    scanf("%d", &year);
    printf("输入月份：");
    scanf("%d", &mount);
    printf("输入日期：");
    scanf("%d", &days);

    switch(mount)
    {
        case 12:
            days+=30;
        case 11:
            days+=31;
        case 10:
            days+=30;
        case 9:
            days+=31;
        case 8:
            days+=31;
        case 7:
            days+=30;
        case 6:
            days+=31;
        case 5:
            days+=30;
        case 4:
            days+= 31;
        case 3:
            if((year%400 == 0 )||(year % 4 == 0))
            {
                days += 29;
            }
            else
            {
                days += 28;
            }
        case 2:
            days+=31;
        case 1:
    }

    printf("今天是%d年的第%d天。", year, days);
    return 0;
}
