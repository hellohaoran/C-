// 指针练习2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//#include<string.h>
//#include <stdio.h>


//void ss(char* ch, char x) {
//	int n = strlen(ch);
////	for (int i = 0; i < n; ++i) {
////		if (ch[i] == x) {
////			ch[i] = ch[i] - 'a' + 'A';
////
////		}
////
////}
//	while (*ch != '\0') {
//		if (*ch == x) {
//			*ch = *ch - 'a' + 'A';
//
//		}
//		ch++;
//	}
//
//
//}
//int main()
//{
//	char ch[] = "abcdfngdksd";
//	ss(ch, 'd');
//	printf("%s", ch);
//}
// 
// 
// 
// 
//int  atoi(char* a) {
//	int num=0;
//	char *tmp = a;
//	int flag = 0;
//	
//	while (*tmp != '\0') {
//		if (*tmp == '\r' || *tmp == '\n' ) {
//			tmp++;
//
//		}
//		if (*tmp == '-') {
//			tmp++;
//			flag = 1;
//		}
//		else if (*tmp == '+') {
//			tmp++;
//
//		}
//		num = num * 10 + ( *tmp - '0');
//		tmp++;
//	}
//	if (flag == 1) {
//		return -num;
//	}
//	else {
//		return num;
//	}
//}
//int main() {
//	char a[1024] = "";
//	scanf("%s", a);
//	int num;
//	num = atoi(a);
//	printf("%d", num);
//}
// 
// 
// 
//对字符串的比较
// 
// 
// 
//#define _CRT_NO_SECRUE_WARNINGS_
//void pop_sort(char** ch,int num) {
//	char** p = ch;
//	
//	
//	
//	for (int i = 0; i < num-1; ++i) {
//		for (int j = 0; j < num - 1- i; ++j) {
//			if (strcmp(p[j] , p[j + 1])>0) {
//				char* c = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = c;
//			}
//		}
//
//	}
//
//}
//int main() {
//	char* ch[] = {"asdf","kddf","dijjkl","lopls"};
//	// 用sizeof去计算有多少个字符串,因为在c里面只有这个挺好用
//	int num;
//	num = sizeof(ch) / sizeof(ch[0]);
//	pop_sort(ch,num);
//	for (int i = 0; i < 4; ++i) {
//		printf("%s ", ch[i]);
//	}
//}
// 
// 
// 

//int main() {
//	char st[] = "asdadda,fafgasda,sddklsd";
//	char* k[1024] = { NULL };
//	int i = 0;
//	char* delim = ",";
//	char* p = strtok(st, delim);
//	printf("%s", p);
//	k[i++] = p;
//	while (p != NULL) {
//		p = strtok(NULL, ","); // strtok 必须是 以 "," 字符串分割;
//		k[i++] = p;
//
//	}
//	printf("%d", sizeof(k) / sizeof(k[0])); // 指针越界的问题
//	for (int j = 0; j <strlen(k); ++j) {
//		printf("%s ", k[j]);
//	}
//
//
//
//}



//int main() {
//	char ch[1024] = "asdasda,asdafaf,,,ggafasdas,fadas";
//	int i = 0;
//	char* p = ch;
//	while (*p != '\0') {
//		if (*p == ',') {
//			char* q = p;
//			while (*q != '\0') {
//				*q = *(q + 1);
//				q++;//
//			}
//
//		}
//		else {
//			p++;
//		}
//	}
//	printf("%s", ch);
//}
// 
// 
// 
//int main()
//{
//	char ch[] = "asdaada,dafa,sd,,f,a,f,asd,,dsa,";
//	char* p = ch;
//	printf("%c", NULL);
//	while (p != NULL) {
//		if (*p == ',') {
//			char* q = p;
//			while (*(q) != '\0') {
//				*q = *(q + 1);
//				q++;
//			}
//		}
//		else {
//			p++;
//		}
//
//	}
//	printf("%s", ch);
//}
// 
// 
// 
#include <stdio.h>
#include <string.h>

int main() {
    char a[10] = "sda";
    char b[] = "";
    int c;
    memset(&c, 0, sizeof(c));
    printf("%d\n", c);

    printf("%s\n", a);
    memset(a, 0, sizeof(a));
    printf("%s\n", a);
    memset(a, 100,sizeof(a)-1);
    printf("%s\n", a);
    memcpy(b, a, 5);
    b[6] = '\0';
    printf("%s", b);

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
