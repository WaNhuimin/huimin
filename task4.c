//1.����Ļ���������ͼ���� 
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
//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3��
//370 = 3 ^ 3 + 7 ^ 3 + 0 ^ 3��
//371 = 3 ^ 3 + 7 ^ 3 + 1 ^ 3��
//407 = 4 ^ 3 + 0 ^ 3 + 7 ^ 3��
//* /
//
#include<stdio.h>
int main()
{
	int num = 0;
	int i, j, k;
	printf("�����0��999�ڵ�����ˮ�ɻ�����\n");
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
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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