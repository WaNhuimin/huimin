////1.ģ��ʵ��strncpy
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char * Mystrncpy( char* dest, const char *src, size_t n)
//{
//	assert(dest );
//	assert(src );
//	char *ret = dest;
//	while (n--)
//	{
//		*dest++ = *src++;
//		
//	}
//	return ret;
//}
//
//int main()
//{
//	char* str1[] = { 'a','b','c' };
//	char* str2 = "defghk";
//	int n = 5;
//	printf("%s\n", Mystrncpy(*str1, *str2, n));
//	system("pause");
//	return 0;
//}
//////2.ģ��ʵ��strncat
////#include<stdio.h>
////#include<stdlib.h>
////#include<assert.h>
////char* Mystrncat(char* dest, const char* src, int n)
////{
////	assert(dest);
////	assert(src);
////	int i = 0;
////	char* tmp = dest;
////	while (*dest)
////	{
////		dest++;//dest++�ı�����β�ָ��ĵ�ַ����������destָ����Ԫ�ز�û�иı�
////	}
////	while (i < n)
////	{
////		*(dest + i) = *(src + i);
////		i++;
////	}
////	*(dest + i + 1) = '\0';
////	return tmp;
////}
////int main()
////{
////	char* str1[] = { 'a', 'b', 'c' };
////	char* str2 = "defghk";
////	int n = 5;
////	printf("%s\n", Mystrncat(*str1, *str2, n));
////	system("pause");
////	return 0;
////}
////3.ģ��ʵ��strncmp
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char *Mystrncmp(const char *str1, const char *str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else if (*str1 < *str2)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char *str1 = "ab";
//	char *str2 = "abc";
//	printf("%s\n", Mystrncmp(str1, str2));
//	system("pause");
//	return 0;
//}
#include <stdio.h> 
#include<stdlib.h>
int int_cmp(const void * p1, const void * p2)
{
	return (*(int *)p1 > *(int *)p2);
}
void _swap(void *p1, void * p2, int size)
{
	int i = 0;
	for (i = 0; i< size; i++)
	{
		char tmp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}
void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
{
	int i = 0;
	int j = 0;
	for (i = 0; i< count - 1; i++)
	{
		for (j = 0; j<count - i - 1; j++)
		{
			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0)
			{
				_swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;
	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}




