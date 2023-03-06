// 归并.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
using namespace std;
#define _CRT_NO_SECRUE_WARNINGS_
const int  N = 1e6;
int a[N] = {0};
int tmp[N];

void merge_sort(int* a, int l, int r) {
	if (l >= r) return;
	int mid = (l + r) / 2;
	merge_sort(a, l, mid);
	merge_sort(a, mid + 1, r);
	int i = l;
	int k = 0;
	int j = mid+1;
	while (i <= mid && j <= r) {
		if (a[i] < a[j]) {
			tmp[k++] = a[i++];
		}
		else {
			tmp[k++] = a[j++];
		}
	}
	while (i <= mid) tmp[k++] = a[i++];
	while (j <= r) tmp[k++] = a[j++];
	for (i = l, j = 0; i <= r; ++i, ++j) a[i] = tmp[j];
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)  scanf("%d", &a[i]);
	merge_sort(a, 0, n - 1);
	for (int i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	
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
