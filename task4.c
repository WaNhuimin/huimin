//1.在屏幕上输出以下图案： 
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//
//

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	scanf_s("%d", &line);
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("pause");
	return 0;
}
//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。
//370 = 3 ^ 3 + 7 ^ 3 + 0 ^ 3。
//371 = 3 ^ 3 + 7 ^ 3 + 1 ^ 3。
//407 = 4 ^ 3 + 0 ^ 3 + 7 ^ 3。
//* /
//
#include<stdio.h>
int main()
{
	int num = 0;
	int i, j, k;
	printf("请输出0到999内的所有水仙花数：\n");
	for ( num = 0; num <= 999;num++)
	{
		i = num / 100;
		j = num / 10 - i* 100;
		k = num  - j * 10 - i*100;
		if (num==i*i*i + j*j*j + k*k*k )
		{
			printf("%d\n", num);
		}

	}
	return 0;
}
//3.
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
int main()
{int a=0;
int n = 0;
int i = 0;
int tmp = 0;
int sum = 0;
scanf_s("%d%d", &n, &a);
for (i = 0; i < n; i++)
{
	tmp = tmp * 10 + a;
	sum += tmp;
}
printf("%d\n", sum);
return 0;
}