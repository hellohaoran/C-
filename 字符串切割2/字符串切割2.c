// 字符串切割2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//#include<stdio.h>
//
//int main()
//{
//    char line[150];
//    int i, j;
//    printf("输入一个字符串: ");
//    fgets(line, (sizeof line / sizeof line[0]), stdin);
//
//    for (i = 0; line[i] != '\0'; ++i)
//    {
//        while (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0'))
//        {
//            for (j = i; line[j] != '\0'; ++j)
//            {
//                line[j] = line[j + 1];
//            }
//            line[j] = '\0';
//        }
//    }
//    printf("输出: ");
//    puts(line);
//    return 0;
//}



//sprintf 
//#include<stdio.h>
//int main()
//{
//	int year = 2024;
//	int mouth = 12;
//	int day = 21;
//		char buf[1024] = "";
//		sprintf(buf, "year=%d month=%d day=%d", year, mouth, day);
//		printf("%s", buf);
//	ssancf(buf,)
//}
// 
// 
//#include<stdio.h>
//int main(int argc,char *argv[]) {
//	printf("%d", sizeof("abc"));// baokuo
//	printf("%s", argv[1]);
//	printf("%s", argv[2]);
//	printf("%d", argc);
//
//}
// 
// 
//#include<string.h>
//#include<stdio.h>
//int main() {
//	int year;
//	int mounth;
//	int day;
//	char buf[] = "beijing:2018:06:12";
//	sscanf(buf, "beijing:%d:%d:%d", &year, &mounth, &day);
//	printf("%d %d %d\n", year, mounth, day);
//	char* p = strchr(buf, 'g'); // strchr 找到之后返回查找到后的地址;
//	char* q = strstr(buf, "jing");
//	printf("%s", p);
//	printf("%s", q);
//	char* k[10];
//	int i = 0;
//	do {
//		if (i == 0) {
//			k[i++] = strtok(buf, ":");
//		}
//		else {
//			k[i++] = strtok(NULL, ":");
//		}
//
//
//	} while (k[i-1] != NULL);
//	for (int j = 0; j < i - 1; ++j) {
//		printf("%s ", k[j]);
//	}
//
//}
#include<stdio.h>
#include<string.h>
int strstr_num(char* st,char *dst) {
	int n = 0;
	char* p = st ;
	do {
		p = strstr(p, dst); // 在p返回的找
		if (p != NULL) {
			p = p + strlen(dst);
			n++;
		}
	} while (p != NULL);
	return n;

}
int main() {
	char a[] = "asdasdasdasdasdjkds";
	int num;
	
	char* f = "asd";
	num = strstr_num(a,f);
	printf("%d", num);


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
