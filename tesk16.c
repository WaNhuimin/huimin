////1.ģ��ʵ��strcpy
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char *Mystrcpy(char *dest, const char* src)//����˭˭��ֵ�Ͳ��ܱ��ı䣬�ʴ������Ϊconst ����
//{
//	char *p = dest;
//	assert(dest != NULL&&src != NULL);
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';//�Ż��棺while(*dest++=*src++){};return p;�������Ȱ�*src��ֵ��*dest��Ȼ��src++��dest++��
//	//��destΪ'\0',��Ϊ0ֵʱ����Ϊ�٣�����ѭ����
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
////2.ģ��ʵ��strcat//�˺���ʵ�������ַ���������
//#include<stdio.h>
//#include<stdlib.h>
//char *Mystrcat(char *dest, const char* src)
//{
//	char *p = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}//dest��ʱָ����'\0'
//	while (*dest++ = *src++)
//	{
//	}//�˴�����յĻ���������ΪҪʹdest������ֽ����ӵ�src�����һ��Ϊֹ������ѭ��ִֻ��һ��
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
////3.ʵ��strstr            //���ܣ�ʵ���������в����Ӵ�
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
//		s1 = start;//s1���˵���һ�ε���һ��λ��
//		s2 = str2;//s2���˵�str2����ʼλ��
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
//	char str1[20] = "abcdef ";//����
//	char *str2= "bcd";//�Ӵ�
//	printf("%s\n", Mystrstr(str1,str2));
//	system("pause");
//	return 0;
//}
////4.ʵ��strchr
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
////5.ʵ��strcmp
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
//6.ʵ��memcpy
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
//7.ʵ��memmove
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