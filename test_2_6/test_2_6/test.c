#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//#include<assert.h>

//void reverse(char*str)
//{
//	assert(str);//��ָ֤�����Ч��
//	int len = strlen(str);
//
//	char* left = str;
//	char* right = str + len - 1;
//	
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//}
//}
//int main()
//{
//	char arr[256] = {0};
//	//scanf("%s", arr);
//	gets(arr);//��ȡһ��
//
//	reverse(arr);
//
//	printf("�������ַ���Ϊ��%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2  5
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0;i < n;i++)//2 22 222 2222 22222
//	{
//		ret = ret * 10 + a;
//		sum +=  ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;                  //�ж�i�Ƿ�Ϊˮ�ɻ���
//	for (i = 0;i <= 100000;i++)
//	{
//		int n = 1;       
//		int tmp = i;
//		//int sum = 0;
//		while (tmp/=10)//����i��λ��-n
//		{
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)//����ˮ�ɻ���ÿλ��n�η�֮��
//		{
//			sum+=pow(tmp%10, n);
//			tmp /= 10;
//		}
//		if (i == sum)//��ԭ�������ֱȽ��Ƿ���ͬ������Ϊˮ�ɻ���
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
int main()
{
	int line = 0;
	scanf("%d", &line);//  ����7��
	int i = 0;
	//��ӡ�ϰ벿��
	for (i = 0;i < line;i++)
	{
		int j = 0;           //��ӡ�ո�
		for (j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		for (j = 0;j < 2 * i + 1;j++)//��ӡ*
		{
			printf("*");
		}
		printf("\n");
	}

	//��ӡ�°벿��
	for (i = 0;i < line-1;i++)
	{
		int j = 0;           //��ӡ�ո�
		for (j = 0;j <=i;j++)
		{
			printf(" ");
		}
		for (j = 0;j < 2 * (line-1-i)-1;j++)//��ӡ*
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}