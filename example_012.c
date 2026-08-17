/*
**	题目：判断 101 到 200 之间的素数。
*/

#include <stdio.h> 

int main()
{
	int i, j;
	
	printf("101 到 200 之间的素数:\n");
	
	for(i = 101; i < 200; i++)
	{
		for(j = 2; j < i / 2; j++)
		{	// 判断是否是素数，i / 2 的目的主要是缩短可能被整除的数 
			if(i % j == 0)
			{
				break;	// 可以被乘除直接跳出循环 
			}
		}
		if(j > i / 2 - 1)
		{
			printf("%-5d", i);
		}
		
	}
	return 0;
}
