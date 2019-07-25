//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
						{
							if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
							{
								if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
								{
									if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
									{
										if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
										{//对五个值均不相同的判断
											if (((a != b) && (a != c) && (a != d) && (a != e))
												&& ((b != c) && (b != d) && (b != e))
												&& ((c != d) && (c != e))
												&& ((d != e)))
											{
												printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
											}

										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
////2. 
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A = 0, B = 0, C = 0, D = 0;
	int i = 0;
	int n = 0;
	for (i = 0; i < 4; i++)
	{
		if (1 == i)
		{
			A = 1; C = 1; D = 1; D = 0; n = 1;
		}
		if (2 == i)
		{
			A = 0; C = 0; D = 1; D = 0; n = 1;
		}
		if (3 == i)
		{
			A = 0; C = 1; D = 0; n = 0;
		}
		if (4 == i)
		{
			A = 0; C = 1; D = 1; n = 0;
		}
		if (A + B + C + D == 1 && n == 0)
			printf("A=%d,B=%d,C=%d,D=%d\n", A, B, C, D);
	}
	system("pause");
	return 0;
}
////3.在屏幕上打印杨辉三角。 
//1
//1 1
//1 2 1
//1 3 3 1
#include<stdio.h>
#include<stdlib.h>
int main(){

	int a[10][10] = { 0 };
	for (int i = 1; i < 11; i++){
		for (int j = 1; j < i; j++){
			if (i == 1){
				printf("%4d\n", a[1][1] = 1);
			}
			else{
				if ((j == 1) || (i == j)){
					printf("%4d", a[i][j] = 1);
				}
				else{
					printf("%4d", a[i][j] = a[i - 1][j - 1] + a[i - 1][j]);
				}
			}
		}
		printf("\n");

	}

	system("pause");
	return 0;
}
