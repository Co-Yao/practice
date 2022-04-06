#define  _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//远古的Pascal人也使用阿拉伯数字来进行计数
//，但是他们又不喜欢使用7，
//因为他们认为7是一个不吉祥的数字，
//所以Pascal数字8其实表示的是自然数中的7，
//18表示的是自然数中的16。下面计算一下，
//在正整数n范围以内包含有多少个Pascal数字。
//int main()
//{
//	int t,i = 0;
//	scanf("%d", &t);
//	for (i = 0; i < t; i++) 
//	{
//		long int n = 0;
//		scanf("%ld", &n);
//		long int number = 0;
//		int count = 0;
//		while (n > 0)
//		{
//			int z = n % 10;
//			if (z > 7)
//				number += (z - 1) * pow(9, count);
//			else
//				number += z * pow(9, count);
//			n /= 10;
//			count++;
//		}
//		printf("%ld\n", number);
//	}
//	return 0;
//}
//1,2,3,4,5,6,7,8,9,均使用一次，组成abc,def,hig且比例为1：2：3
//int arr[10] = { 0 };
//int cmp_int(const void* _a, const void* _b)
//{
//	int* a = (int*)_a; 
//	int* b = (int*)_b;
//	return *a - *b;
//}
//void demo(int x,int y,int z)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i < 3)
//		{
//			arr[i] = x % 10;
//			x /= 10;
//		}
//		if (i >= 3 && i < 6)
//		{
//			arr[i] = y % 10;
//			y /= 10;
//		}
//		if (i >= 6 && i < 9)
//		{
//			arr[i] = z % 10;
//			z /= 10;
//		}
//	}
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 123; i < 350; i++)
//	{
//		int a, b, c = 0;
//		a = i;
//		b = 2 * i;
//		c = 3 * i;
//		if (c > 1000)
//			continue;
//			demo(a, b, c);
//			qsort(arr, 9, 4, cmp_int);
//			int j = 0;
//			for ( j = 0; j < 8; j++)
//			{
//				if (arr[j] < arr[j + 1])
//					continue;
//				else
//					break;
//			}
//			if (j == 8 && arr[0] != 0)
//			{
//				printf("%d %d %d\n", a, b, c);
//			}
//		}
//	return 0;
//}
//模拟快排qsort函数 qsort传入四个数据，第一个是数组的指针，
//第二个是要排列的的数的个数，
//第三个是数据的字节，
//第四个是快排函数的排列方式
// 未实现
//int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//void print(char* buff1, char* buff2, int wideth)
//{
//	int i = 0;
//	for (i = 0; i < wideth; i++)
//	{
//		char* temp = buff1;
//		buff1 = buff2;
//		buff2 = temp;
//		buff1++;
//		buff2++;
//	}
//}
//	int cpt(const void* a, const void* b)
//{
//	return ((*(int*)a) - (*(int*)b));
//}
//void my_qsort(void* a, int b, int c, int* (my)(const void*, const void*))
//{
//	int i = 0;
//	for (i = 0; i < b-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < b - i-1; j++)
//		{
//			if (cpt(((char*)a + j * c), (char*)a + (j + 1) * c) > 0)
//				print((char*)a + j * c, (char*)a + (j + 1) * c,c);
//		}
//	}
//}
//int main()
//{
//	int a = sizeof(arr) / sizeof(arr[0]);
//	int b = sizeof(arr[0]);
//	my_qsort(arr, a, b, cpt);
//	printf("%d %d\n", arr[1], arr[2]);
//	return 0;
//}