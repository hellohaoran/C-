#include<stdio.h>
#include<stdlib.h>
#define _CRT_NO_SERCURE_WARINGS
int fun2(int a,int b) {
	int c;
	c = a + b;
	return c;
}
//�����Ĵ����ǵ��򴫵�,(ʵ�δ����β�)
//���ʵ���Ǵ���������,ֻ����ֵ����
void swap(int, int); // ��������������д������
//��������ʱ��Ҫ�ӷֺ�
// extern �������������ⲿ�ĺ���
//extern void swap(int a, int b);
//void swap(int a, int b);
int main() {
	int l = fun(12, 21);
	printf(" % d", l);
	swap(12, 15);

}
