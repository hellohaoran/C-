// day11作业.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
typedef struct student {
	char name[50];// 姓名
	unsigned int age;
	int score;//成绩

}STU;
_sort(STU* st, int n) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - 1 - i; ++j) {
			if (st[j].age > st[j + 1].age) {
				int tmp = st[j].age;
				st[j].age = st[j + 1].age;
				st[j + 1].age = tmp;
			}
			else if (st[j].age == st[j + 1].age) {
				if (st[j].score > st[j + 1].score) {
					int tmp = st[j].score;
					st[j].score = st[j + 1].score;
					st[j + 1].score = tmp;
				}
			}
		}
	}
}
int main()
{
	STU st[5] = { {"张浩然",26,89},
		{"浩然",25,97},
		{"空",24,54},
		{"和",25,59},
		{"型",24,75} };
	_sort(st, 5);
	for (int i = 0; i < 5; ++i) {
		printf("学生 = %s,年级 = %d,成绩 = %d\n", st[i].name, st[i].age, st[i].score);
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
