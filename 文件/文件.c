// 文件.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_NO_SECRUE_WARNINGS_
int main04()
{
	//文件可读可写:r+:不会清空文件//若文件不存在则不会创建
	//文件可读可写:w+:会清空文件//若文件不存在则会创建
	//文件可读:r//若文件不存在则不会创建
	//文件可写:w;清空文件后写
	//文件追加:a ,打开文件并在文件末尾更改,若文件不存在则创建
	//文件追加:a+:若文件不存在,创建文件
	//fclose('fp')是关闭文件,
	FILE* fp = fopen("./asd.txt", "rb");
	if (NULL == fp) {
		perror("");
	}
	char buf[13] = "";
	/*for (int i = 0; (buf[i] = fgetc(fp))!=-1; ++i) {
		
	}*/
	int i = 0;
	while (feof(fp)==0) {
		buf[i++] = fgetc(fp);
	}
	printf("%s", buf);
	fclose(fp);
	return 0;
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
