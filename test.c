#define  _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//模拟快排qsort函数 qsort传入四个数据，第一个是数组的指针，
//第二个是要排列的的数的个数，
//第三个是数据的字节，
//第四个是快排函数的排列方式
// 实现
//int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//void print(char* buff1, char* buff2, int wideth)
//{
//	int i = 0;
//	for (i = 0; i < wideth; i++)
//	{
//		char temp = *buff1;
//		*buff1 = *buff2;
//		*buff2 = temp;
//		buff1++;
//		buff2++;
//	}
//}
//int cpt(const void* a, const void* b)
//{
//	return ((*(int*)a) - (*(int*)b));
//}
//void my_qsort(void* a, int b, int c, int* (my)(const void*, const void*))
//{
//	int i = 0;
//	for (i = 0; i < b - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < b - i - 1; j++)
//		{
//			if (cpt(((char*)a + j * c), (char*)a + (j + 1) * c) > 0)
//				print((char*)a + j * c, (char*)a + (j + 1) * c, c);
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
//n盏灯，编号1-n,k个人，
//第一个人把所有灯打开，
//第二个人把2的倍数的灯（打开or 关掉）
//输出开着的灯的编号
//int arr[1100] = { 0 };
//int main()
//{
//	int n, k = 0;
//	scanf("%d %d", &n, &k);
//	int i = 0;
//	for (i = 2; i < k + 1; i++)
//	{
//		int j = 0;
//		for (j = 1; j < n + 1; j++)
//		{
//			if (j % i == 0)
//			{
//				if (arr[j] == 1)
//					arr[j] = 0;
//				else if(arr[j] == 0)
//					arr[j] = 1;
//			}
//		}
//	}
//	int z = 0;
//	int count = 0;
//	for (z = 1; z < n + 1; z++)
//	{
//		if (arr[z]==0)
//		{
//			if (count == 0)
//				printf("%d", z);
//			else
//			{
//				printf(" %d ", z);
//			}
//			count++;
//		}	
//	}
//	return 0;
//}
// 课本的算法
#include<stdio.h>
#include<string.h>		arr	未定义标识符 "arr"	

#define maxn 1010
int a[maxn];
int main()
{
	int n, k, first = 1;
	memset(a, 0, sizeof(a));
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j % i == 0)
				a[j] = !a[j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i])
		{
			if (first)
				first = 0;
			else
				printf(" ");
			printf("%d", i);
		}
	}
	printf("\n");
	return 0;
}

