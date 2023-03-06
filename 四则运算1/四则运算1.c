// 四则运算1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<string.h>
#include<time.h>
#define FILEPATH "./四则运算.txt"
void gets_f() {
	FILE* fp = fopen(FILEPATH, "w");
	int n;
	scanf("%d", &n);
	srand(time(NULL));
	int a;
	int b;
	char c;// 作为算术符
	int i = 0;
	char ch[] = { '+','-','*','/' };
	char buf[128] = "";
	while (i < n) {
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		c = ch[rand() % 4];
		sprintf(buf, "%d%c%d=\n", a, c, b);
		fputs(buf, fp);
		++i;
	}
	fclose(fp);
	
}
void write(char** st, int n) {
	FILE* fp = fopen(FILEPATH, "w");
	if (NULL == fp) {
		perror("");
		return -1;
	}
	int i = 0;
	while (i < n) {
		fputs(st[i], fp);
		++i;
	}
	fclose(fp);
}
void puts_f() {
	FILE* fp = fopen(FILEPATH, "r");
	char buf[128] = "";
	char cmd[20][128] = { 0 };
	int a, b;
	char c;
	int num;
	int i = 0;
	while (1) {
		fgets(buf, sizeof(fp),fp);
		if (feof(fp)) {
			break;
		}
		sscanf(buf, "%d%c%d", &a, &c, &b);
		switch (c) {
		case '+':num = a + b; break;
		case '-':num = a - b; break;
		case'*':num = a * b; break;
		case'/':num = a / b; break;
		}
		sprintf(cmd[i], "%d%c%d=%d\n", a, c, b, num);
		printf("%s", cmd[i]);
		++i;
	}
	fclose(fp);
	//write(cmd, i);
	FILE* f = fopen(FILEPATH, "w");
	if (NULL == f) {
		perror("");
		return -1;
	}
	int j = 0;
	while (j < i) {
		fputs(cmd[j], fp);
		++j;
	}
	fclose(fp);

}
int main()
{
	puts_f();
	//gets_f();
	
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
