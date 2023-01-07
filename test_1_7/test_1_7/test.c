#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
int main ()
{
	char arr[] = "abcdef";
	char * pc =arr;
	printf("%s\n", arr);
	printf("%s\n", pc);
	return 0;
}