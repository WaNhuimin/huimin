////1.模拟实现strcpy
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char *Mystrcpy(char *dest, const char* src)//拷贝谁谁的值就不能被改变，故传入参数为const 类型
//{
//	char *p = dest;
//	assert(dest != NULL&&src != NULL);
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';//优化版：while(*dest++=*src++){};return p;其中首先把*src的值给*dest，然后src++，dest++；
//	//当dest为'\0',即为0值时条件为假，跳出循环。
//	return p;
//}
//int main()
//{
//	char dest[20] = "abcdef ";
//	char *src = "hello";
//	printf("%s\n", Mystrcpy(dest, src));
//	system("pause");
//	return 0;
//}
////2.模拟实现strcat//此函数实现两个字符串的连接
//#include<stdio.h>
//#include<stdlib.h>
//char *Mystrcat(char *dest, const char* src)
//{
//	char *p = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}//dest此时指向了'\0'
//	while (*dest++ = *src++)
//	{
//	}//此处增添空的花括号是因为要使dest后面的字节增加到src的最后一个为止，否则循环只执行一次
//	return p;
//}
//int main()
//{
//	char dest[20] = "abcdef ";
//	char *src = "hello";
//	printf("%s\n", Mystrcat(dest, src));
//	system("pause");
//	return 0;
//}
////3.实现strstr            //功能：实现在主串中查找子串
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char *Mystrstr(const char *str1, const char* str2)
//{
//	const char *s1 = NULL;
//	const char *s2 = NULL;
//	const char *start = str1;
//	assert(str1!= NULL&&str2 != NULL);
//	while (*start != '\0')
//	{
//		s1 = start;//s1回退到上一次的下一个位置
//		s2 = str2;//s2回退到str2的起始位置
//		while (*s1 != '\0'&&*s2 != '\0'&&*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s1 =='\0')
//		{
//			return NULL;
//		}
//		if (*s2 == '\0')
//		{
//			return start;
//		}
//		start++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1[20] = "abcdef ";//主串
//	char *str2= "bcd";//子串
//	printf("%s\n", Mystrstr(str1,str2));
//	system("pause");
//	return 0;
//}
////4.实现strchr
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//const char *Mystrchr(const char *src, char ch)
//{
//	assert(src != NULL);
//	while (*src != '\0')
//	{
//		if (*src == ch)
//		{
//			return src;
//		}
//		src++;
//	}
//	return NULL;
//}
//int main()
//{ 
//	char *src = "bcd";
//	printf("%s\n", Mystrchr( src,'c'));
//	system("pause");
//	return 0;
//}
////5.实现strcmp
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char Mystrcmp(const char *str1, const char *str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//		
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
//	char *str1 = "abcdef";
//	char *str2= "bcd";
//	Mystrcmp(str1, str2);
//	printf("%s\n", Mystrcmp(str1,str2));
//	system("pause");
//	return 0;
//}
//6.实现memcpy
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* Mymemcpy(void* dest, const void* src, int n)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (n--)
	{
		*(char*)dest = *(const char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	char *str1[10] = { 0 };
	char *str2 = "abcdefg";
	char *ret = NULL;
	ret = Mymemcpy(str1, str2, 6);
	printf("%s\n", ret);
	system("pause");
	return 0;
}
//7.实现memmove
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void *Mymemmove(void *dest, void* src, size_t count)
{
	void* ret = dest; 
	assert(dest != NULL);
	assert(src != NULL);
	if (dest>src)
	while (count)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
		count--;
	}
	else{
		while (count--)
		{
			*((char*)dest + count) = *((char*src) + count);
		}
	}
	return ret;
}

int main()
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	memmove(arr1 + 2, arr1, 16);
	for (int i = 0; i < 6; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	return 0;
}