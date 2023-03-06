// 字符串.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECRUE_NO_WARINGS
int main() {
	printf("hello");
}

//int main01()
//{
//	int mid;
//	int a[10] = { 2,5,20,10,15,21,30,21,25,63 };
//	for (int i = 0; i < 9; ++i) {
//		for (int j = 0; j < 9 - i; ++j) {
//			if (a[j] > a[j + 1]) {
//				mid = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = mid;
//
//			}
//		}
//
//	}
//	for (int i = 0; i < 10; ++i) {
//		printf("%d ", a[i]);
//	}
//
//}
//int main03() {
//	int a[3][4]; // 定义一个3行4列的二维数组
//	// 二维数组的每个元素是个变量
//	printf("%d\n", sizeof(int[3][4]));// 二维数组的类型
//	printf("%d\n", sizeof(a)); // 二维数组的大小
//	a[1][1] = 10;
//	a[2][3] = 20;
//	int b[][3] = { 1,2,3,4,5 }; // 不能省略列的下标只能省略行的下标
//}
//
//int main02() {
//	int a[3][4] = { 1,2,3 };
//	int n = sizeof(a) / sizeof(a[0][0]); // 求数组的大小;
//	int line = sizeof(a) / sizeof(a[0]);
//	int clu = sizeof(a[0]) / sizeof(a[0][0]);
//	printf("n = %d, line = %d\n", n, line);
//	printf("%d\n", a[0]);
//	printf("%d\n", a[0] + 1);
//	printf("%d\n", &a[0] + 1); // 行地址加1
//
//}
//int main05() {
//	//int a[2][3];
//	//printf("%u,%u\n", a[0], &a[0]); //这两个值相等因为,a[0]表示第零行一维数组的数组名,,&a[0]表示第0行第一个元素的地址
//	//printf("%u\n", a);// a是二维数组的数组名,代表二维数组,代表首行地址,&a[0],
//	//printf("%u\n", &a);
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("a=%p\n", a);//%p按十六进制输出数据,如果输出不足8位,则补零
//	printf("&a[0] = %p\n", &a[0]);
//
//
//}
//int main47() {
//	float a[5][3] = { {80,75,56},{59,65,71},{59,63,70},{85,45,90},{76,77,45} };
//	int i;
//	double sum = 0;
//	int num[3] = { 0 };
//	float aver[3] = { 0 };
//	for (i = 0; i < 3; ++i) {
//		for (int j = 0; j < 5; ++j) {
//			sum += a[j][i];
//			if (a[j][i] < 60) {
//				num[i] += 1;
//			}
//
//
//		}
//		aver[i] = sum / 5.0;
//
//
//
//
//	}
//	for (int i = 0; i < 3; ++i) {
//		printf("%lf\n", aver[i]);
//	}
//	for (int i = 0; i < 3; ++i) {
//		printf("%d\n", num[i]);
//	}
//}
//int main21() {
//
//	char ao[10];//定义一个普通的字符数组
//	char yo[5] = { 'a','b','c' }; //因为有\0所以他也是字符串,%s打印时遇到\0就结束
//	//只要双引号引起的字符串,后面必然跟了一个'\0
//	char me[3] = "ab"; //表示有me存有ab\0
//	printf("%s\n", me);
//	char en[10] = { 0 };//将en数组都赋为'\0';
//	printf("%s\n", yo);
//
//}
//int main22() {
//	char ch;
//	scanf("%c", &ch);
//	printf("%c", ch);
//	char num[125] = ""; // 有引号的就有/0
//	scanf("%s", num);
//	printf("[%s]\n", num);
//
//
//}
//
//int main6() {
//	char num[3] = "";
//	//gets(num);//参数存的是存放地址,但是同样对输入的字符不加限制从而造成内存覆盖的内存污染
//	//printf("%s",num);
//	//fgets可以 对读取的字符长度进行限制,由于\0还要占一个单位,所以读取的字符个数为n-1个 
//	//fgets也会把回车键\n作为字符读取到num,从而多出一行
//	fgets(num, sizeof(num) - 1, stdin); // 从stdin读到num,
//	printf("%s", num);
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
