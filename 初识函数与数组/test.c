//���� - ��ѧ - f��x��
//C�����к���������ͬ - f��x��y�� = x + y - ADD��x��y�� = x + y
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//������ʽ
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

//������ʽ
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;//����ֵ��z������0���������㶨Ϊ0
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

//���� - һ����ͬ���͵�Ԫ�صļ���
//���� - ʹ�ñ����ķ�ʽ - 10������1-10�Ĵ洢
//������ʹ���±������ʵ� - ����arr[0] - �Ƿ��ʵ�һ��ֵ
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	//...
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','b','c' };//����ȫ��ʼ�������������ᱻʶ��Ϊ\0��Ҳ����0
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}