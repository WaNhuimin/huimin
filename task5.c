//1.��ɲ�������Ϸ�� 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("****************\n");
	printf("**** 1.play ****\n");
	printf("**** 0.exit ****\n");
	printf("****************\n");
}
void game()
{
	int randNum = rand() % 100 + 1;//����1��10֮�������,rand���ֵΪ32767��
	int num = 0;//�û�����
	while (1)
	{
		printf("������µ�����>:");
		scanf_s("%d", &num);
		if (num > randNum)
		{
			printf("�´���\n");
		}
		else if (num < randNum)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������ӣ�ÿ�β�����һ�����������
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	}
	while (input);
	return 0;
}
//�ڶ���(���ֲ��ҽ��������������)д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

//#include<stdio.h>
//#include<stdlib.h>
//int binary_search(int arr[], int key, int left, int right)
//
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//        if(arr[mid] > key)
//       {
//        right = mid-1;
//	   }
//		else if(arr[mid] < key)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 7;//��Ҫ���ҵ�����
//	int length = sizeof(arr)/sizeof(arr[0]);
//	//arr�����ﶨ���������ʹ��sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = length-1;
//	int ret = binary_search(arr, key, left, right);
//	if(ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±���:%d\n", ret);
//	}
//	int mid = (left+right)/2;	
//	system("pause");
//	return 0;
//}
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//    for(i=0; i<3; i++)
//	{
//		printf("����������:>");
//		scanf_s("%s", password);//"123456"
//		if(strcmp(password, "123456") == 0)//string compare
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������,����������!\n");
//		}
//	}
//	if(i == 3)
//	{
//		printf("�����������������˳�����\n");
//	}
//	system("pause");
//	return 0;
//}
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//end of file= =>ctr+z
//	{
//		if (ch>= 'a'&&ch <= 'z')
//		{
//			putchar(ch- 32);
//		}
//		else if (ch>= 'A'&&ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch >= '0'&&ch <= 9)
//		{
//
//
//			;
//		}
//	}
//	printf("\n");
//	return 0;
//}
