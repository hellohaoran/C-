// 指针.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()

//x86系统下的指针4字节,x64下的为8字节
{//在使用时,对一个表达式取*,就会对表达式减一级*,如果对表达式取&,表达式就会加一级*
	int a = 0x10405060;
	int* p = &a;
	short* p1;
	long long* p2;
	char* p3;
	char* p4 = (char*)&a;
	short* p5 = (short*)&a;
	int* p6 = (int*)&a;
	/*printf("%x\n", *p4);
	printf("%x\n", *p5);
	printf("%x\n", *p6);*/
	//不同类型的指针变量.取指针指向的内容的宽度
	//指针宽度 = sizeof(将指针变量与指针变量最近的*拖黑,剩下的类型)
	//宽度也叫步长
	//步长:指针加1跨过的字节数
	// char *p 
	//char **p
	printf("%d\n", sizeof(p3));

	printf("%p\n", &a);// 
	printf("%p\n", p4 + 1);
	printf("%p\n", p5 + 1);
	printf("%p\n", p6 + 1);
	/*printf("%d", *p);
	printf("%d", sizeof(p1));
	printf("%d", sizeof(p2));
	printf("%d", sizeof(p3));
	printf("%d", *p);*/

	//定义指针的三步骤
	//1.*与符号结合代表是一个指针变量
	//2.要保存谁的地址,将它的定义形式放在此处
	//3.用*p替换定义的变量
//分析:
	//指针变量的类型是 符号加*,
	//

}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main02() {
//	////野指针(没有初始化的针为野指针)
//	int* p; //p乱指
//	*p = 200;
//	printf("%d\n", *p);
//	int* p;
//	int a = 200;
//	//*p = &a;
//	//printf("%d\n", *p);// p的指向为a;
//
//}
//int main03() {
//	int* p = NULL;// NULL 是0x 00 00 00 00这是程序的起始地址
//	int a;
//	if (p == NULL) {
//		p = &a;
//	}
//
//	*p = 200; //因为p保存了起始地址,所以
//	printf("%d", *p);
//}
int main05() {
	int a = 10;
	void* p = (void*) & a;// 为万能指针,给它赋值时需要强转
	//printf("%d\'n", *p); //因为编译器不知道p占几个字节 
	printf("%d\n", *(int*)p); //  将指针类型强转成(int*)
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
