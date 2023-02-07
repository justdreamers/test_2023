#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int total = 0;
//	int money = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;//买回来喝的汽水
//
//	empty = money;//空瓶换回的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//例如3除2得到一个空瓶数，再模2得到剩下的
//	}
//	printf("total=%d\n", total );
//	return 0;
//}
void print(int arr[],int  sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左边找偶数
		//加上（left<right）防止数组里面全是奇数或偶数，left和right越界访问
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//从右边找奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1,3,4,5,6,7,8,9, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}