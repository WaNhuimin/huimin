//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
//	printf("������˷��ھ��������:");
//	scanf_s("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}
//2.ʹ�ú���ʵ���������Ľ�����

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
//3.ʵ��һ�������ж�year�ǲ������ꡣ
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
//	printf("�����������:");
//	scanf_s("%d", &year);
//	leap(year);
//	system("pause");
//	return 0;
//}
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//�����ڱ���ʱȷ����С
//����������ʱ�����ڴ�
//������ջ�Ͽ��ٿռ䣬����Լ1�׻�2�׵��ڴ�ռ䡣
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
//        arr[i] = arr[len - i - 1];//[]�Դ�������==>arr[i]==>*��arr+i);������ǰ���������˭�ͼ���Ӧ���ֽ�����
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
//5.ʵ��һ���������ж�һ�����ǲ���������
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
//	printf("������һ������\n");
//	scanf_s("%d", &num);
//	result = judge_num(num);
//	if (result == 0)
//	{
//		printf("%d������\n", num);
//	}
//	else
//	{
//		printf("%d��������\n", num);
//	}
//	system("pause");
//	return 0;
//}

