﻿// 指针数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	//int a = 10;
	//int b = 20;
	//int c = 30;
	////元素类型为int *
	//int* num[3] = { &a,&b, & c };
	//printf("%d\n", sizeof(num));
	//for (int i = 0; i < sizeof(num) / sizeof(num[0]);++i) {
	//	printf("%d ", *num[i]);

	//}
	////num == &num[0] == &(int*) == int **
	//int** k = num;
	//for (int i = 0; i < sizeof(num) / sizeof(num[0]); ++i) {
	//	printf("%d ", **(k + i));
	//}
	int a[2] = { 1,2 };
	printf("%d", *a);

 }

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
