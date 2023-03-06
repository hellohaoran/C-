// 函数作业.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#define _CRT_NO_SECRUE_WARINGS
#include<string.h>
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;

}
int mul(int a, int b) {
	return a * b;
}
int div(int a, int b) {
	return a / b;
}
int main()
{
	char ch[10] = "";
	int a;
	int b;

	
	while (1) {
		scanf("%s %d %d ", ch, &a, &b);
		if (0 == strcmp(ch, "add")) {
			printf("sum = %d", add(a, b));
			break;

		}
		else if (0 == strcmp(ch, "sub")) {
			printf("submission = %d", sub(a, b));
			break;
		}
		else if (0 == strcmp(ch, "mul")) {
			printf("multiple = %d", mul(a, b));
			break;
		}
		else if (0 == strcmp(ch, "div")) {
			printf("division = %d", div(a, b));
			break;
		}
	}
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
