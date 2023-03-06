// 指针2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<time.h>

//int main()
//{
//	const int a = 10; // 对其const
//	int* p = &a;
//	*p = 2000;
//	printf("%d", *p);
//	printf("%d", a);
//}
// 
//int main() {
//	char str[100];
//	char str1[100];
//	scanf("%s", str); // scanf遇到空格停止输入
//	printf("%s\n", str);
//	gets(str1);
//	printf("%s",str1);
//}
//int main() {
//	time_t tm = time(NULL);//得到系统时间
//	srand((unsigned int)tm);//随机种子只需要设置一次即可
//
//	int r = rand();
//	printf("r = %d\n", r);
//
//	return 0;
//}
int main() {
	//int const a = 10;
	/*int* p = &a;
	*p = 20;
	printf("%d", a);*/

	////修饰*,不能改变指向地址的内容
	//int const* p = &a;
	//int b = 15;
	//p = &b;// 正确,虽然不能改变指向的地址内容但是可以改变指向的地址
	////*p = 10;//错误不能改变指向地址的内容
	//printf("%d", *p);

	//const修饰变量p
	// p保存的地址不可修改
	int* const p;
	int a = 10;


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
