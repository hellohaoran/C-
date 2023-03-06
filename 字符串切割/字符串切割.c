// 字符串切割.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECRUE_NO_WARNINGS_
int main()
{
	char buf[] = "1_lbt6_0#262272#54E1AD293CAD\
#0#0#0#4000#9:1531646672:lh:lh:32:hello world";
	char* st[1024];
	char* de[] = { ':' };
	// 
	char* p = strtok(buf, de); //必须有个分割符

	int i = 0;
	st[i] = p;
	while (p = strtok(NULL, de)) {
		st[i] = p;
		++i;

	}
	for (int i = 0; i < strlen(st); ++i)
		printf("%s\n", st[i]);
	/*while (p != NULL) {
		st[i] = p;

		++i;
	}
	for (int j = 0; j < i; ++j) {
		printf("%s\n", st[i]);
	}*/
}
	
//}
// 
// 
// 
//int a = 2;
//int f(int* a) {
//	return (*a)++;
//}
//int main() {
//	int s = 0;
//	int a = 5;
//	s += f(&a);
//	s += f(&a);
//	printf("%d\n", s);
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
