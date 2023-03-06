// malloc的使用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

#include<stdlib.h>
#include<string.h>

//int main()
//{
//	char* p = (char*)malloc(sizeof(char) * 10);
//	  p= strcpy(p, "haoran");
//	  p = "ok";
//	printf("%s", p);
//	free(p);
//	printf("%s", p);
//
//}


/////////////////////////
//int* fun() {
//	int static a;
//	a = 10;
//	return &a;
//}
//int* fun1(int num) {
//	num += 1;
//	return &num;
//}
//int *fun2(int *n) { // 形参都是局部变量; 
//	*n += 20;
//
//	return n;
//}
//
//
//int main(int argc,char *argv[]) {
//	//printf("%d", argc);
//	//for(int i=0;i<argc;++i)
//	//printf("%s\n", argv[i]);
//	int* p = fun();// 静态局部变量没有释放空间可以操作返回的地址
//	//局部变量释放空间,不可以操作地址;
//	*p = 30;
//	printf("%d\n", *p);
//	int* q = fun1(10);// 形参也是局部变量, 因此子函数不可以返回形参的地址;
//	int num = 20;
//	int* k = fun2(&num);//但是将形参所存的实参地址可以作为值来返回
//	printf("k = %d", *k);
//
//
//}
// 
// 
// 

//char* func() {
//	char* p = malloc(100);
//	return p; //返回之后由于p被释放 所以不再指向malloc分配的空间
//}
//int main() {
//	char* q = func();
//	//q = "helk"; // q又指向文字常量区 所以指向的malloc的区域的线就断了; 
//	strcpy(q, "helk"); // ""本质上就是一个地址; 将 字符常量"helk"拷贝到q所指的空间;
//	char buf[20];
//	printf("%d\n", sprintf(buf, "%s", "hkeasd\0dasd")); // sprintf返回传入buf的元素个数
//	memcpy(q, "hkeasd\0dasd",11); 
//	for (int i = 0; i < 11; ++i) {
//		printf("%c", q[i]);
//	}
//	free(q);
//
//}
// 
// 
//
// 
// ///////////// 
//void mem_p(char* q) {
//	q = malloc(100);
//
//	return;
//}
//int main() {
//	char* p = NULL;
//	mem_p(p);
//	strcpy(p, "dasd");
//	printf("%s", p);
//
//
//
// }
// 
// 
void mem_p2(char** k) {
	*k = malloc(100);
	return;
}
int main() {
	char* p = NULL; //指针初始化;
	mem_p2(&p);
	strcpy(p, "daj");
	printf("%s", p);
	free(p);

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
