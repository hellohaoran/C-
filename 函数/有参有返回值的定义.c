#include<stdio.h>
#include<stdlib.h>
#define _CRT_NO_SERCURE_WARINGS
int fun2(int a,int b) {
	int c;
	c = a + b;
	return c;
}
//参数的传递是单向传递,(实参传给形参)
//如果实参是传参数本身,只会是值传递
void swap(int, int); // 函数的声明不用写函数体
//声明函数时需要加分号
// extern 用来声明引用外部的函数
//extern void swap(int a, int b);
//void swap(int a, int b);
int main() {
	int l = fun(12, 21);
	printf(" % d", l);
	swap(12, 15);

}
