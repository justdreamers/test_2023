#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0;i < 10;i++)
	{
		for (j = 0;j < 10;j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	//打印
	for (i = 0;i < 10;i++)
	{
		for (j = 0;j <= i;j++)//让j<=i是为了只打印左边一半三角形
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\n");//打印一行后换行
	}
	return 0;
}