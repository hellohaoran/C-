// typedef.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <string.h>
//struct TT {
//	int a;
//	int b;
//};
//typedef  struct TT t;
//#define char32 char
//int main()
//{
//	t h[10]; // 表示10个元素的结构体数组;
//	char32 a = 'a';
//	h[1].a = 21;
//	h[1].b = 22;
//	printf("%d", h[1].a);
//	printf("%c", a);
//
//}

//union Test
//{
//	unsigned char a;
//	unsigned int b;
//	unsigned short c;
//};
//
//int main()
//{
//	//定义共用体变量
//	union Test tmp;
//
//	//1、所有成员的首地址是一样的
//	printf("%p, %p, %p\n", &(tmp.a), &(tmp.b), &(tmp.c));
//
//	//2、共用体大小为最大成员类型的大小
//	printf("%lu\n", sizeof(union Test));
//
//	//3、一个成员赋值，会影响另外的成员
//	//左边是高位，右边是低位
//	//低位放低地址，高位放高地址
//	tmp.b = 0x44332211;
//
//	printf("%x\n", tmp.a); //11
//	printf("%x\n", tmp.c); //2211
//
//	tmp.a = 0x00;
//	printf("short: %x\n", tmp.c); //2200
//	printf("int: %x\n", tmp.b); //44332200
//
//	return 0;
//}

typedef int INT;
typedef char BYTE;
typedef BYTE T_BYTE;
typedef unsigned char UBYTE;
typedef struct type {
	UBYTE a;
	INT b;
	T_BYTE c;
}TYPE,*PTYPE;
int main() {
	TYPE t;
	t.a = 5;
	t.b = 15;
	t.c = 'k';
	printf("%d\n", sizeof(t.a));
	printf("%d\n", sizeof(t.b));
	printf("%d\n", sizeof(t.c));
	PTYPE p = &t;
	printf("%c,%d,%c", p->a, p->b, p->c);

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
