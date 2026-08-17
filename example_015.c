/*
**	题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
*/

#include <stdio.h>

int main()
{
    int socre;
    char grade;
    printf("请输入分数："); 
    scanf("%d", &socre);

    grade = (socre >= 90) ? 'A' : ((socre >= 60) ? 'B':'C');
    
    printf("%c", grade);

    return 0;
}
