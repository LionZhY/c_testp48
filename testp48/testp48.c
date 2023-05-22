#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//2023.05.22
//p48 函数递归 --- 函数自己调用自己 


//练习1  接收一个无符号整型值，按照顺序打印它的每一位，如输入1234，输出1 2 3 4 

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
	scanf("%u", &num);//输入1234

	print(num);//调用print()函数可以打印参数部分数字的每一位

	return 0;
} 


