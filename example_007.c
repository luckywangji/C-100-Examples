/*
**	题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
*/

#include <stdio.h>
#include <windows.h>

int main()
{
    // 保存原来控制台代码页
    UINT oldCP = GetConsoleOutputCP();
    // 设置输出代码页为 OEM 437
    SetConsoleOutputCP(437);

    char a=176,b=219;
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);

    // 恢复原有代码页（可选）
    SetConsoleOutputCP(oldCP);
    system("pause");
    return 0;
}
