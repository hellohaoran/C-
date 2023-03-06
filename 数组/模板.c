// 字符串.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECRUE_NO_WARINGS

int main10()
{//数组名和变量名的定义方法一致
	//符号和[]结合代表这是一个数组
	//数组中的元素的个数由[]里面的数值决定
	//每个元素的类型由,数组名前面的类型决定
	//定义数组时,[]里面的值不能为变量,只能为常量
	//使用时,[]里面的值可以为常量也可以为变量
	//数值数组不能整体操作,
	//数组每个元素都是变量,可以被改变赋值
	/*int n = 10;
	int num[n] = 10;*/
	printf(" % 010d\n", 12345);
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; ++i) {
		printf("%d ", num[i]);
	}
	int k[10] = { [5] = 5 };//第五个元素初始化为5,其他元素初始化为0;
	for (int i = 0; i < 10; ++i) {
		printf("%d", k[i]);
	}
	int t[10] = { 0 };//第一个元素初始化为0,其他元素默认初始化为0;
	int g[] = { 1,2,3 };//如果定义时,[]中没有值,这个数组的元素个数由{}里的个数决定
	int n = sizeof(g) / sizeof(g[0]);//求数组有多少个元素
	printf("%d", n);
	//遍历数组
	for (int i = 0; i < sizeof(g) / sizeof(g[0]); ++i) {
		printf("%d", g[i]);
	}
	int sum = 0;
	for (int i = 1; i <= 100; ++i) {
		if (i % 2 == 0) {
			sum -= i;
		}
		else {
			sum += i;
		}
	}
	printf("%d", sum);
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
int main21() {
	int i = 0;
	while (1) {
		if ((i % 2 == 1) && (i % 3 == 2) && (i % 6 == 5) && (i % 7 == 0)){
			break;
		}
		++i;
	}
	printf("%d", i);
}

int main02() {
	int a[5];
	printf("%u\n", &a[0]);
	printf("%u\n", a);
	printf("%u\n", &a);

	printf("%u\n", &a[0] + 1);
	printf("%u\n", a + 1);//
	printf("%u\n", &a + 1);//跨过整个数组

}
int main() {
	int a[10] = { 2,4,5,6,8,9,10,20,30,21 };
	int max = a[0];
	for (int i = 1; i < 10; ++i) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("max = %d\n", max);
	printf("%d", sizeof(a) / sizeof(a[0]) - 1);
	int mid ;
	int i, j;
	for (i = 0, j = sizeof(a) / sizeof(a[0]) - 1; i < j; i++, j--) {
		mid = a[i];
		a[i] = a[j];
		a[j] = mid;

	}
	for (int k = 0; k <= sizeof(a) / sizeof(a[0])- 1; ++k) {
		printf("%d",a[k]);
	}

}