////1. 打印100~200之间的素数
////（判断是否为素数：试除法）
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, m = 0;
	float k = 0;
	for (n = 101; n <= 200; n++)
	{
		k = sqrt((float)(n));
		//for (i = 2; i <= k;k++)
		   if (n%i == 0)break;
		   if (i >= k + 1)
		   {
			   printf("%d", n);
			   m = m + 1;
		   }
		   if (m % 10 == 0)
			   printf("\n");
	}
	printf("\n");
	return 0;
}
////2. 输出乘法口诀表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for（i = 1; i <= 9;i++)
//	{
//		int j = 0;
//		for (j = 1; j <= 1; j++)
//		{
//			printf("%d*%d=%2d",i,j,i*j)
//		}
//		printf("\n")；
//	}
//	return 0；
//}
//
////3. 判断1000年-- - 2000年之间的闰年
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//		}
//	}
//
//	return 0;
//}