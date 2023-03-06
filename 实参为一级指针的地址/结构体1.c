// 实参为一级指针的地址.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<string.h>
//定义一个结构体 
//关键字 struct 代表一个结构体类型
// 整个结构体的类型是 struct stu 
// 结构体类型 struct stu {} 中是结构体成员,每个成员可以是任意类型
// 
// 
// 
//struct stu {
//	int id;
//	int age;
//	char name[1204];
//}; // 里面的元素不能现在赋值;
struct stu {
	int id;
	int age;
	char name[1204];
} a, b; // 定义类型时同时定义了 a,b 结构体变量
struct stu c;

int main()
{
	struct stu d = { 1,20,"ubunqu" };
	struct stu k = { .age = 22 }; // 给部分元素初始化;
	struct stu f;
	// 给结构体变量赋值,就是通过点域 即. 来操作 
	f.age = 25; 
	//f,name = "jda" // 数组名是一个常量,所以出错
	strcpy(f.name, "kong");

	//如果通过结构体地址操作结构体需要->
	(& f)->id = 3;
	(&f)->age = 20;
	strcpy((&f)->name, "asjdi");
	printf("%d %d %s", (&f)->id, (&f)->age, (&f)->name);



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
