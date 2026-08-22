/*
**	题目：两个乒乓球队进行比赛，各出三人，甲队为 a、b、c 三人，乙队为 x、y、z 三人。
**	抽签决定比赛名单，有人向队员打听比赛的名单：a 说他不和 x 比，c 说他不和 x、z 比，请编写代码找出三队赛手的名单。
*/


#include <stdio.h>

int main()
{
//    char team_a[3] = {'a', 'b', 'c'};
//    char team_b[3] = {'x', 'y', 'z'};

    int i, j;

    for(i = 'a'; i <= 'c'; i++)
    {
        for(j = 'x'; j <= 'z'; j++)
        {
			printf("%c-%c\n", i,j);
        }
    }
    return 0;
}
