#define _CRT_SECURE_NO_WARNINGS
////1.��д����
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
#include<stdio.h>
#include<stdlib.h>
unsigned int reverse_bit(unsigned int value)
{
	int flag = 32, a;
	unsigned int num = 1, All_num = 0;
	while (value)
	{
		if (value % 2 != 0) //	printf("1");
		{
			value -= 1;
			for (num = 1, a = flag; a>1; a--)
				num = num * 2;
			All_num = num + All_num;
			flag -= 1;
			value /= 2;
		}

		else 	//	printf("0");
		{
			value /= 2;
			flag -= 1;
		}
	}
	return All_num;
}
int main()
{
	int a = 15;
	int b = 5;
	printf("%d\n", (a + b) >> 1);
	system("pause");
	return 0;
}
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ
int Found(int arr[], int n)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < n; i++)
	{
		tmp ^= arr[i];
	}
	return tmp;
}
int main()
{
	int arr[] = { 1, 3, 2, 4, 3, 4, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = Found(arr, n);
	printf("%d", result);
	return 0;

}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
#include<stdio.h>
#include<stdlib.h>

//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//			student a am i
//			i ma a tneduts
//			i am a student
#include<stdio.h>
void Resevrse(char *str, char *left, char *right)
{
char *tmp
}
int main()
{
	return0;
}