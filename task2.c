//第一题：给定两个整形变量的值，将两个值的内容进行交换。
#include<stdio.h>
int main()
{
	int i = 2;
	int n = 3;
	int tmp = i;
	printf("%d,%d\n", i, n);
	i = n;
	n = tmp;
	printf("%d,%d\n", i, n);
	return 0;
}
////第二题： 不允许创建临时变量，交换两个数的内容（附加题）
//#include<stdio.h>
//int main()
//{
//	int n1 = 10;
//	int n2 = 20;
//	printf("%d,%d\n", n1, n2);
//	n1 = n1 + n2;
//	n2 = n1 - n2;;
//	n1 = n1 - n2;
//	printf("%d,%d\n", n1, n2);
//	return 0;
//}
////第三题：求10 个整数中最大值。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = 0;
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//    }
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}
////第四题：将三个数按从大到小输出。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 2;
//	int b = 5;
//	int c = 1;
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a < c)
//	{
//		tmp = c;
//		c = a;
//		a = tmp;
//	}
//	printf("%d,%d,%d\n", a, c, b);
//	system("pause");
//	return 0;
//}
////第五题：求两个数的最大公约数。
//#include<stdio.h>
//int main()
//{
//	int a = 6;
//	int b = 3;
//	int c = 0;
//	while (a%b != 0)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}