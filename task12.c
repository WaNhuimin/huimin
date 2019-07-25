#define _CRT_SECURE_NO_WARNINGS
////1.编写函数
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
#include<stdio.h>
#include<stdlib.h>
unsigned int reverse_bit(unsigned int value)
{
	int flag = 32, a;
	unsigned int num = 1, All_num = 0;
	while (value)
	{
		if (value % 2 != 0) //	printf("1");
		{
			value -= 1;
			for (num = 1, a = flag; a>1; a--)
				num = num * 2;
			All_num = num + All_num;
			flag -= 1;
			value /= 2;
		}

		else 	//	printf("0");
		{
			value /= 2;
			flag -= 1;
		}
	}
	return All_num;
}
int main()
{
	int a = 15;
	int b = 5;
	printf("%d\n", (a + b) >> 1);
	system("pause");
	return 0;
}
//2.不使用（a + b） / 2这种方式，求两个数的平均值
int Found(int arr[], int n)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < n; i++)
	{
		tmp ^= arr[i];
	}
	return tmp;
}
int main()
{
	int arr[] = { 1, 3, 2, 4, 3, 4, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = Found(arr, n);
	printf("%d", result);
	return 0;

}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
#include<stdio.h>
#include<stdlib.h>

//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//			student a am i
//			i ma a tneduts
//			i am a student
#include<stdio.h>
void Resevrse(char *str, char *left, char *right)
{
char *tmp
}
int main()
{
	return0;
}