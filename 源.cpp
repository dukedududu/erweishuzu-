#include<stdio.h>
#define M 3
int main()
{
	//定义 键盘输入
	int a[M][M];
	int i, j,t[M];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", &a[i][j]);
	//第一行 存储中间变量
	for (i = 0; i < 3; i++)
		t[i] = a[0][i];
	//其他行上移
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			a[i][j] = a[i + 1][j];
	//最后一行放中间变量数据
	for (i = 0; i < 3; i++)
		a[M - 1][i] = t[i];
	//输出数组
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%2d", a[i][j]);
		printf("\n");
	}
	return 0;
}