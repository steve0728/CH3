#include<stdio.h>
#include<stdlib.h>

int odd(int u);
int even(int u);
int totalsum(int u);

int main(void)
{
	int n, sum;
	int choose;
	printf("1+2+...+n=?請輸入n=");
	scanf_s("%d", &n);
	fflush(stdin);
	printf("請問要做奇數和(0),偶數和(1),還是整數和(2)?請選擇:");
	scanf_s("%d", &choose);

	switch(choose)
	{
	case 0:
		sum = odd(n);
		break;
	case 1:
		sum = even(n);
		break;
	case 2:
		sum = totalsum(n);
		break;
	
	}
	printf("總合為%d\n", sum);
	system("pause");
	return 0;
}
int odd(int  u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}
int even(int  u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;
}
int totalsum(int  u)
{
	return odd(u) + even(u);
}