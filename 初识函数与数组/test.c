//函数 - 数学 - f（x）
//C语言中函数与其相同 - f（x，y） = x + y - ADD（x，y） = x + y
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//正常方式
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

//函数方式
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;//返回值到z，而非0，否则结果恒定为0
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}

//数组 - 一组相同类型的元素的集合
//数组 - 使用变量的方式 - 10个整形1-10的存储
//数组是使用下标来访问的 - 比如arr[0] - 是访问第一个值
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	//...
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','b','c' };//不完全初始化，其余两个会被识别为\0，也就是0
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}