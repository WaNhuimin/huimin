//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//#include<stdio.h>
//#include<stdlib.h>
//void print(int n)
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int n = 0;
//	printf("请输入乘法口诀表的行数:");
//	scanf_s("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}
//2.使用函数实现两个数的交换。

//#include<stdio.h>
//#include<stdlib.h>
//int swap(int *x, int *y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x =*y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a, b;
//	scanf_s("%d,%d", &a, &b);
//	swap(&a, &b);
//	printf("%d,%d\n", a, b);
//	system("pause");
//  return 0;
//}
//3.实现一个函数判断year是不是闰年。
//#include<stdio.h>
//#include<stdlib.h>
//int leap(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	printf("请您输入年份:");
//	scanf_s("%d", &year);
//	leap(year);
//	system("pause");
//	return 0;
//}
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//数组在编译时确定大小
//数组在运行时开辟内存
//数组在栈上开辟空间，开辟约1兆或2兆的内存空间。
//#include<stdio.h>
//#include<stdlib.h>
//void Init(int arr[], int len)
//{
//	int i = 0;
//	for (; i < len; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
//void Empty(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//	return 0;
//}
//void Reverse(int *arr, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{int tmp=
//	}
//	for (i = 0; i <= len / 2 - 1; i++)
//	{
//		int tmp = arr[i];
//        arr[i] = arr[len - i - 1];//[]自带解引用==>arr[i]==>*（arr+i);数组名前面的类型是谁就加相应的字节数。
//		arr[len - i - 1] = tmp;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	int len = sizeof(arr) / sizeof (arr[0]);
//	Init(arr,len);
//	return 0;
//}
//5.实现一个函数，判断一个数是不是素数。
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int judge_num(int n)
//{
//	int i = 0;
//	for (i = 2; i <=(double)sqrt( n); i++)
//	{
//		if (n%i == 0)
//			return -1;
//	}
//       return 0;
//}
//
//int main()
//{
//	int num = 0;
//	int result = 0;
//	printf("请输入一个数字\n");
//	scanf_s("%d", &num);
//	result = judge_num(num);
//	if (result == 0)
//	{
//		printf("%d是素数\n", num);
//	}
//	else
//	{
//		printf("%d不是素数\n", num);
//	}
//	system("pause");
//	return 0;
//}

