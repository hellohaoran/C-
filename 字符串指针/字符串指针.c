// 字符串指针.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<string.h>

//int main()
//{
//	//a[]存在于栈区
//	char a[] = "helloworld";//定义了一个字符数组,字符数组的内容为helloworld\0
//	//定义一个指针用来保存数组首元素的地址
//	char* p = a;
//	p = "abcdef"; //存在于字符常量区
//	*p = "m"; // 因为p指向的是字符常量区,所以不能对p指向的空间进行修改
//	printf("%s\n", p);
//	printf("%s\n", p + 2);// %s打印一个字符串,从p+2开始
//	printf("%c\n", *(p + 3));
//	
//	printf("%d\n", sizeof(a));//为11
//	printf("%d\n", sizeof(p)); // 值为4
//	p++;
//	printf("%s\n", p);
//
//}
char * my_strcat(char* a, char* b) {
	int i = 0;
	while (a[i] != '\0') {
		++i;
	}
	int j = 0;
	while (b[j] != '\0') {
		a[i++] = b[j++];
	}
	a[i] = 0;
	return a;
}
int main() {
	char str1[128] = "hello"; 
	char str2[128] = "123456";
	
	printf("%s", my_strcat(str1, str2));
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
