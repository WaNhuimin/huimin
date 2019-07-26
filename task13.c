////1.调整数组使奇数全部都位于偶数前面。
////题目：
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//int New(int *p,int len)
//{
//	int *q = p + len - 1;
//	int tmp;
//	assert(p != NULL);
//	while (p < q)
//	{
//		while ((*p & 1) == 1)
//		{
//			p++;
//		}
//		while ((*q & 1) == 0)
//		{
//			q--;
//		}
//		if (p < q)
//		{
//			tmp = *p;
//			*p = *q;
//			*q = tmp;
//		}
//	}
//	return;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	New(arr, len);
//	for (i=0; i < len; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//2.杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//数组：
//1 2 3
//2 3 4
//3 4 5

//1 3 4
//2 4 5
//4 5 6

//1 2 3
//4 5 6
//7 8 9
#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
int Yang(int arr[ROW][COL], int val)
{
	int i = 0;
	int j = COL - 1;
	int tmp = arr[i][j];
	while (1)
	{
		if (tmp == val)
		{
			return 1;
		}
		else if (tmp > val&&i<ROW-1)
		{
			tmp = arr [++i][j];
		}
		else if (tmp<val&&j > 0)
		{
			tmp = arr[i][--j];
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int arr[ROW][COL] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	int num=0;
	int i = 0;
	int j = 0;
	printf("数组为：\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j <= COL; j++)
		{
			printf("%-2d", arr[i][j]);
		}
		printf("\n");
	}
	printf("Please Enter:");
	scanf_s("%d", &num);
	if (Yang(arr, num))
	{
		printf("%d在该数组中\n", num);
	}
	else
	{
		printf("%d不在该数组中\n", num);
	}
	return 0;
}