#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//#include<assert.h>

//void reverse(char*str)
//{
//	assert(str);//保证指针的有效性
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
//	gets(arr);//读取一行
//
//	reverse(arr);
//
//	printf("逆序后的字符串为：%s\n", arr);
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
//	int i = 0;                  //判断i是否为水仙花数
//	for (i = 0;i <= 100000;i++)
//	{
//		int n = 1;       
//		int tmp = i;
//		//int sum = 0;
//		while (tmp/=10)//计算i的位数-n
//		{
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)//计算水仙花的每位的n次方之和
//		{
//			sum+=pow(tmp%10, n);
//			tmp /= 10;
//		}
//		if (i == sum)//和原来的数字比较是否相同，是则为水仙花数
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
int main()
{
	int line = 0;
	scanf("%d", &line);//  假设7行
	int i = 0;
	//打印上半部分
	for (i = 0;i < line;i++)
	{
		int j = 0;           //打印空格
		for (j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		for (j = 0;j < 2 * i + 1;j++)//打印*
		{
			printf("*");
		}
		printf("\n");
	}

	//打印下半部分
	for (i = 0;i < line-1;i++)
	{
		int j = 0;           //打印空格
		for (j = 0;j <=i;j++)
		{
			printf(" ");
		}
		for (j = 0;j < 2 * (line-1-i)-1;j++)//打印*
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}