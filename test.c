#define  _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
//int arr[10000] = { 0 };
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	arr[0] = n;
//	int count = 1;
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			n /= 2;
//			arr[count] = n;
//			count++;
//		}
//		else
//		{
//			n = n * 3 + 1;
//			arr[count] = n;
//			count++;
//		}
//	}
//	printf("%d", arr[count - 1]);
//	int i = 0;
//	for (i = count - 2; i >= 0; i--)
//	{
//		printf(" %d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
int sort_int(const void* a, const void* b)
{
	return *((int*)a) - *((int*)b);
}
arr[1100] = { 0 };
int main()
{
	int n ,i= 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}
	qsort(arr, n, 4, sort_int);
	int j ,count= 0;
	for (j = 0; j < n; j++)
	{
		if (arr[j] == arr[j + 1])
		{
			arr[j] = 0;
			count++;
		}
	}
	printf("%d\n", n - count);
	int m,first = 0;
	for (m = 0; m < n; m++)
	{
		if (arr[m] == 0)
			continue;
		else
		{
			if (first == 0)
			{
				first = 1;
				printf("%d", arr[m]);
			}
			else
				printf(" %d", arr[m]);
		}
	}
	printf("\n");
	return 0;
}