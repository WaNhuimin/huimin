////1.ʵ��һ�����������������ַ����е�k���ַ���
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
//#include<stdio.h>
//#include<stdlib.h>
//void reverse(char arr[], int k)
//{
//	int n = strlen(arr);
//	int m = k%n;
//	char arr1[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++, j++)
//	{
//		if (i - m >= 0)
//		{
//			arr1[i - m] = arr[i];
//		}
//		else
//		{
//			arr1[n + (i - m)] = arr[i];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = arr1[i];
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	printf("please input the removing number:\n");
//	scanf_s("%d", &k);
//	reverse(arr, k);
//	puts(arr);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int Judge(char str1[], char str2[], int len)
{
	if (strcmp(str1, str2) == 0)
	{
		return -1;
	}
	strncat(str1, str2, len);//��һ���ַ�������ƴ��һ���ַ���
	if (strstr(str1, str2) != NULL)
	{
		return 1;
	}
	return 0;
}
int main()
{
	char str1[] = "AABCD";//ƴ��֮������ĳ��Ȼ����ӣ����趨��ʱ����ӦԶ�����䱾��ĳ��ȡ�
	char str2[] = "BCDAA";
	int ret = 0;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 = len2)
	{
		ret = Judge(str1, str2, len1);
	}
	if (ret == 1)
	{
		printf("str2��str1��ת֮��õ����ַ���\n");
	}
	else if (ret == 0)
	{
		printf("str2����str1��ת֮��õ����ַ���\n");
	}
	else if (ret == -1)
	{
		printf("str2��str1���\n");
	}
	system("pause");
	return 0;
}