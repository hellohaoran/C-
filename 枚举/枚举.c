// 枚举.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
//#include<stdbool.h>
//从另外一个角度来说枚举就是将宏定义集中起来;
//另外常量没有内存
enum a {//枚举类型初始化可以赋值,枚举类型的本质上就是一个个数字字符
	SUN,RAIN=5,SNOW // RAIN是5,则SNOW是6
};
enum bool_ {
	false,
	true
};
typedef  enum bool_ bool; // typedef 是给类型起别名的
int main()
{	
	bool a;
	a = false;
	printf("%d", a);
	//enum ab h = RAIN; // 对枚举型变量赋值只能是枚举类型里面的元素

	//printf("%d %d %d\n", SUN, RAIN , SNOW); //enum 类型;的几个参数,
	//int a = 0;

	//scanf("%d", &a);
	//if (SUN == a) {
	//	printf("KO");
	//}
	//else if (RAIN == a) {
	//	printf("OK");
	//}
	//else if (SNOW == a) {
	//	printf("出去耍!");
	//}

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
