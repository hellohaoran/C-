// 字符串反转.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <stdio.h>
//#include<string.h>
//void swap_(char * a) {
//    char* start = a;
//    char* end = &a[strlen(a) - 1];
//    char x;
//    while (start < end) {
//        x = *start;
//        *start = *end;
//        *end = x;
//        start = start+1;
//        end = end - 1;
//    }
//
//}
//int main()
//{
//    char buf[] = "abcdefg";
//    swap_(buf);
//    printf("%s", buf);
//}

// 字符串变float型
#define _CRT_NO_SECRUE_WARINGS_

#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	char a[128] = "";
	scanf("%s", a);
	int i = 0;
	int b[128] = { 0 };
	int j = 0; 
	int flag = 3;
	while (a[i] != '\0') {
		if ((a[i] == '+' || a[i] == '-')&&i==0) {
			if (a[i] == '+') {
				flag = 0;
			}
			else if (a[i] == '-') {
				flag = 1;
			}
			++i;
			continue;
		}
		switch (a[i++]) {
		case '1':b[j++] = 1;
			break;
		case '2': b[j++] = 2;
			break;
		case '3': b[j++] = 3; break;
		case '4':b[j++] = 4; break;
		case '5':b[j++] = 5; break;
		case '6':b[j++] = 6; break;
		case '7':b[j++] = 7; break;
		case '8':b[j++] = 8; break;
		case '9':b[j++] = 9; break;
		}


	}
	
	int n = 0;
	for (int i = j-1; i >= 0; --i) {
		if (i == j - 1)
			b[i] = b[i];
		else {
			++n;
			printf("b[%d] = %d\n",i, b[i]); 
			b[i] = b[i] * (int)pow(10, n);
			printf("%d ", b[i]);
		}

	}
	int num = 0;
	int x = 0;
	
	for (int i = 0; i < j;++i) {
		num += b[i];
	}
	if (flag == 0) {
		printf("num = +%d", num);
	}
	else if (flag == 1) {
		printf("num = -%d", num);
	}
	else {
		printf("num = %d", num);
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
