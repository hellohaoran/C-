﻿// 多级指针.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS_

int main01()
{
	int a = 10;
	int* p = &a;
	//int *p = int **q
	int** q = &p;
	//如果*和&相遇,想抵消
	//**q == *(*q) == *(p) == a
	// **q == *(*q) == *(&a) == a
	printf("%d\n", **q);
	
	//*k int **q,int ***k
	int*** k = &q;
	printf("%d", ***k);
	//*与符号结合,k是指针变量
	//k是一个变量
	//k的类型,是将变量k涂黑, 剩下的类型
	//k用来保存什么类型的地址,是将变量k和k最近的*一起涂黑,
 
}
int main() {
	//int a[10] = { 1,2,3,4,5,6,7,8,9 };
	//int* p = a;
	//int* q = &a[9];
	//printf("%d\n", q - p); //得到两个相减的步长
	//printf("%d\n", *(p + 3));
	// []  == *() 
	// p[0] == *(p+0)
	/////

	/*int a = 10;
	int* p = &a;
	p[0] = 100;
	printf("a = %d\n", a);*/




	//int a[10] = { 1,2,3,4,5,6,7,8,9 };
	//int* p = &a;
	//for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
	//	printf("%d", p[i]);
	//}
	//



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
