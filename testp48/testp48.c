#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//2023.05.22
//p48 �����ݹ� --- �����Լ������Լ� 


//��ϰ1  ����һ���޷�������ֵ������˳���ӡ����ÿһλ��������1234�����1 2 3 4 

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}


int main()
{
	unsigned int num = 0;
	scanf("%u", &num);//����1234

	print(num);//����print()�������Դ�ӡ�����������ֵ�ÿһλ

	return 0;
} 


