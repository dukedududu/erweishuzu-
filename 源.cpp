#include<stdio.h>
#define M 3
int main()
{
	//���� ��������
	int a[M][M];
	int i, j,t[M];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", &a[i][j]);
	//��һ�� �洢�м����
	for (i = 0; i < 3; i++)
		t[i] = a[0][i];
	//����������
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			a[i][j] = a[i + 1][j];
	//���һ�з��м��������
	for (i = 0; i < 3; i++)
		a[M - 1][i] = t[i];
	//�������
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%2d", a[i][j]);
		printf("\n");
	}
	return 0;
}