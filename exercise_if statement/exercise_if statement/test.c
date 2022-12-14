//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 33; n++)
//	{
//		printf("%d ", 3 * n);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (b > c)
//			{
//				printf("%d %d %d", a, b, c);
//			}
//			else
//			{
//				printf("%d %d %d", a, c, b);
//			}
//		}
//
//
//	}
//	else
//	{
//		if (a < c)
//		{
//			if (b < c)
//			{
//				printf("%d %d %d", c, b, a);
//			}
//			else
//			{
//				printf("%d %d %d", a, c, b);
//			}
//
//
//		}
//
//
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int flag = 0;
//	for (i = 100; i <= 200; i++)//打印100-200之间的数
//	{
//		for (n = 2; n < i; n++)
//		{
//			if (i % n == 0)//判断i是否为素数
//			{
//				flag = 0;
//				break;
//			}
//			else flag = 1;
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);//打印这个素数
//		}
//
//
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d ", year);
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;//他们的公约数
//	int res = 0;//最大公约数
//	scanf("%d %d", &a, &b);
//	if (a >= b)
//	{
//		for (n = 1; n <= b; n++)
//		{
//			if (a % n == 0 && b % n == 0)
//				res = n;
//		}
//	}
//	else
//	{
//		for (n = 1; n <= a; n++)
//		{
//			if (a % n == 0 && b % n == 0)
//				res = n;
//		}
//	}
//	printf("%d\n", res);
//	return 0;
//}