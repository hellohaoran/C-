
#include<stdio.h>
void static func1() {
	printf("func1");
}
void func2() {
	func1();
	printf("func2");
}