////1.��������ʹ����ȫ����λ��ż��ǰ�档
////��Ŀ��
////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
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
//2.���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//���飺
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
	printf("����Ϊ��\n");
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
		printf("%d�ڸ�������\n", num);
	}
	else
	{
		printf("%d���ڸ�������\n", num);
	}
	return 0;
}