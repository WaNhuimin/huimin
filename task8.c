//�õݹ�ͷǵݹ�ķ���ʵ�����n��쳲�������
//�ݹ�
//#include<stdio.h>
//#include<stdlib.h>
//int count = 0;
//int Fab(int n)
//{
//	if(n==1||n==2)
//	{
//		count++;
//		return 1;
//	}
//	else
//	{
//		
//		return Fab(n-1)+Fab(n-2);
//	}
//}
//int main()
//{
//	int res;
//	res = Fab();
//	printf("%d\n", res);
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//3
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int MyStrlen(char *str)
//{
//	int count = 0;
//	while (*str != "\0")
//	{//���ԣ�DEBUG���Ǻ������Ǻ� 
//		//assert(str != NULL);
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *str = "abcdef";
//	int len = MyStrlen;
//	printf("%d", len);
//	system("pause");
//	return 0;
//}
//char*str="abcdef";ֻ������
//*(str+1)='g';//�˲������ܽ���
//��Ŀ�����һ������������
//��һ����ָ��ʵ��
//void reverse_string(char *str)
//{
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//	while (left <= right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	return left;
//}
//int main()
//{
//	char str = "abcef";
//	printf("%s\n", str);
//	reverse_string( str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
//�ݹ鷨
void reverse_string(char *p)
{
	int len = strlen(p);
	char tmp = *p;
	*p = *(p + len - 1);
	*(p + len - 1) = "\0";
	if (strlen(p + 1) > 1)
	{
		reverse_string(p + 1);
	}
	*(p + len - 1) = tmp;
}
int main()
{
	char str = "abcef";
	printf("%s\n", str);
	reverse_string(str);
	printf("%s\n", str);
	return 0;
}
//�ݹ�������ŵ�����⡱
//void Move(int n,char pos1,char pos2)
//{
//
//}
//int main()
//{
//	Hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
