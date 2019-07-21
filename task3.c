//第一题
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sz; i++)
	{
		swap(&a[i], &b[i]);
	}
	printf("交换后数组a的值：");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	printf("交换后数组b的值：");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
	}
	system("pause");
	return 0;
}
//第二题
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sign = 1;
	double a = 2.0, sum = 1.0, term;
	while (a <= 100)
	{
		sign = -sign;
		term = sign / a;
		sum = sum + term;
		a = a + 1;
	}
	printf("%f\n", sum);
	printf("pause");
	return 0;
}

//第三题
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number = 0, count = 0;
	for (int i = 1; i <= 100; i++)
	{
		number = i;
		while (number > 0)
		{
			int d = number % 10;
			if (d == 9)
			{
				count++;
			}
			number /= 10;
		}
	}
	printf("9的个数为：%\n", count);
	system("pause");
	return 0;
}