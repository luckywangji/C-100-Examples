/*
**	题目：打印楼梯，同时在楼梯上方打印两个笑脸。
*/

#include <stdio.h>
#include <windows.h>

int main()
{
	// 保存原来控制台代码页
    UINT oldCP = GetConsoleOutputCP();
    // 设置输出代码页为 OEM 437
    SetConsoleOutputCP(437);
    
    int line, col;
    
    printf("\1\1\n");	//打印两个笑脸 
    for(line = 0; line < 11; line++)
    {
    	for(col = 0; col < line+1; col++)
    	{
    		printf("%c%c", 219, 219);
		}
		printf("\n");
	}
    
    // 恢复原有代码页（可选）
    SetConsoleOutputCP(oldCP);
    system("pause");
    return 0;
}
