#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int total = 0;
//	int money = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;//������ȵ���ˮ
//
//	empty = money;//��ƿ���ص���ˮ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//����3��2�õ�һ����ƿ������ģ2�õ�ʣ�µ�
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
		//�������ż��
		//���ϣ�left<right����ֹ��������ȫ��������ż����left��rightԽ�����
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//���ұ�������
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