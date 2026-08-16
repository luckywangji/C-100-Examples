/*
**	题目：要求输出国际象棋棋盘。
*/

#include <stdio.h>
#include <windows.h> 

int main()
{
	// 保存原来控制台代码页
    UINT oldCP = GetConsoleOutputCP();
    // 设置输出代码页为 OEM 437
    SetConsoleOutputCP(437);
	
    int i,j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if((i+j)%2==0)
            {
                printf("%c",219);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
     // 恢复原有代码页（可选）
    SetConsoleOutputCP(oldCP);
    system("pause");
    return 0;
}
