// 字符串比较.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

#define _CRT_NO_SECRUE_WARINGS_
int my_strcmp(char s1[], char s2[]) {
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
		//直到找到两字符串不相同的
		++i;
	}
	if (s1[i] == s2[i]) {
		return 0;
	}
	else if (s1[i] > s2[i]) {
		return 1;
	}
	else {
		return -1;
	}

}
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

int main01()
{
	char ch[10] = "";
	int a;
	int b;

		while (1) {
			scanf("%s %d %d", ch, &a, &b);
			if (0 == my_strcmp(ch,"add")) {
				printf("sum = %d\n", add(a, b));
				//break;
			}
			else if (0 == my_strcmp(ch, "sub")) {
				printf("sub = %d\n", sub(a, b));
				
			}
			else if (0 == my_strcmp(ch,"mul")) {
				printf("mul = %d \n", mul(a, b));
				//break;
			}
			else if (0 == my_strcmp(ch,"div")) {
				printf("div = %d\n", div(a, b));
				//break;
			}
			else {
				printf("输错了!请重新输入!\n");
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
