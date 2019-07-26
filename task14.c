////1.实现一个函数，可以左旋字符串中的k个字符。
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
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
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int Judge(char str1[], char str2[], int len)
{
	if (strcmp(str1, str2) == 0)
	{
		return -1;
	}
	strncat(str1, str2, len);//给一个字符串后面拼接一个字符串
	if (strstr(str1, str2) != NULL)
	{
		return 1;
	}
	return 0;
}
int main()
{
	char str1[] = "AABCD";//拼接之后数组的长度会增加，则需定义时长度应远超过其本身的长度。
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
		printf("str2是str1旋转之后得到的字符串\n");
	}
	else if (ret == 0)
	{
		printf("str2不是str1旋转之后得到的字符串\n");
	}
	else if (ret == -1)
	{
		printf("str2与str1相等\n");
	}
	system("pause");
	return 0;
}