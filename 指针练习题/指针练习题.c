// 指针练习题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//#include<stdio.h>
//#include<string.h>
//#define _CRT_NO_SECRUE_WARNINGS_
//int my_atoi(char* str) {
//	char* p = str;
//	int num = 0;
//	int flag = 0; // 0表示正数
//	while (*p != 0) {
//		if (*p == '\n' || *p == '\r' || *p == '_') {
//			p= p+1;
//			continue;
//		}
//		 if (*p == '+') {
//			p++;
//			flag = 0;
//			continue;
//		}
//		else if (*p == '-') {
//			p++;
//			flag = 1;
//			continue;
//			}
//		
//			num = num * 10 + (*p - '0');
//			p = p + 1;
//	
//
//	}
//	if (0 == flag) {
//		return num;
//	}
//	else if (1 == flag) {
//		return -num;
//	}
//}
//int main() {
//	char t[] = "";
//	scanf("%s", t);
//	int num =my_atoi(t);
//	printf("%d", num);
//}
#include<stdio.h>
#include<string.h>
int main() {
	char* words[] = { "city","complan","God","link" };
	int n = sizeof(words) / sizeof(words[0]);
	pop_sort(words,n);
	for (int i = 0; i < n; ++i) {
		printf("%s ", words[i]);
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
