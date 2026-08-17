/*
**	题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
*/

#include <stdio.h>

int main()
{
	int n, m, t;
	printf("输入两个正整数：")
	scanf("%d%d", &n, &m);
	
	n = (n > m) ? n : (t = n; n = m; m = t);
	
	if(n % m == )
	return 0;
}

12 1）最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数；

（2）求最大公约数用辗转相除法（又名欧几里德算法）

1）证明：设c是a和b的最大公约数，记为c=gcd(a,b),a>=b,
令r=a mod b
设a=kc，b=jc，则k，j互素，否则c不是最大公约数
据上，r=a-mb=kc-mjc=(k-mj)c
可知r也是c的倍数，且k-mj与j互素，否则与前述k，j互素矛盾,
由此可知，b与r的最大公约数也是c，即gcd(a,b)=gcd(b,a mod b)，得证。

r = 26 % 12 = 2


