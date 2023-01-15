#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Add(int x, int y)
//{
//	int sz = 0;
//	sz = x + y;
//	return sz;
//}
//int main()
//{
//	int x = 10;
//	int y =20;
//	int (*pa)(int ,int)=Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	 void (*p)(char*)=Print;
	 (*p) ("hello world!!");
	return 0;

}