// mem函数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
//int main01() {
//	char a[] = "asd\0asda\0121";
//	char b[100] = "";
//	char * ss = memset(b, 'a', 3);  // 返回dest的地址
//	printf("s= %s", ss);
//	b[3] = '\0';
//	char *s = memcpy(b, a, sizeof(a)); // sizeof() 并不遇到\0结束 返回的是 dest 地址
//	for (int i = 0; i < 10; ++i) {
//		printf("%d ",s[i]);
//	}
//	printf("\n");
//	printf("%s", b);
//
//}
//int main02() {
//	int a[] = { 0,1,2,3,4,5,6 };
//	int b[] = { 0,1,2,3,3,5,6 };
//	printf("%d", strncmp(a, b, 5));
//	printf("%d", memcmp(a, b, 5 * sizeof(int))); // memcmp()比较的单位是字节; 
//}
int main() {
	int* p = (int*)malloc(10*sizeof(int));
	//申请堆空间;
	*(p + 3) = 10;
	*(p + 6) = 100;
	for (int i = 0; i < 10; ++i) {
		printf("%d ", *(p + i));
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
