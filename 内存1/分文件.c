#include<stdio.h>
extern int a;
int va;
int va;
int va;
int va; // 因为这有可能是声明所以 可以编译通过;	
int main() {
	printf("%d", a);
}