#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0;i < sz;i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		printf("%d ", arr1[i]);
		//printf("%d ", arr2[i]);
    	//printf("%d %d ", arr1[i],arr2[i]);
	}
	return 0;
}
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i]=0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int  sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		 arr[left] = arr[right];
//	     arr[right] = tmp;
//		 left++;
//		 right--;
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr[3] = { &a,&b,&c };
//	for (i = 0;i < 3;i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%p   =====   %p\n",p+i, &arr[i]);
//	}
//	return 0;
//}
//int my_strlen(char*str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//
//		end++;
//	}
//	return end-start;
//
//}
//int main()
//{
//	char arr[] = "welcom to bit";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}