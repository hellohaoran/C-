// 字符指针数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<string.h>

#define _CRT_NO_SECRUE_WARINGS_
//
//int main(int argc, char* argv[]) {// 字符指针数组的定义-- char* argv[]
//	//argc 是执行可执行程序的参数个数
//	//argv是一个字符指针数组,0号元素保存的是参数(字符串)的首元素地址
//	printf("%d\n", argc);
//	printf("%s\n", argv[0]);
//		//printf("%s\n", *(argv+0));
//	////printf("%s\n", argv[1]);
//	////printf("%s\n", argv[2]);
//	return 0;
//
//}
//int main() {
//	//strcpy(str1,str2);// 将str2的字符拷贝到str1数组中,str2遇到\0结束,并将\0拷贝至str1
//
//	char str1[128] = "h\0eiadada";
//	char str2[128] = "wosad";
//	//strcpy(str1, str2);
//	strncpy(str1, str2, 4);// 将str2的前4个元素赋给str1
//	printf("%s\n", str1);
//}
 

//int main() {
//	char str1[1024] = "123455";
//	char str2[1024] = "world";
//	strcat(str1, str2);//将str2(直到\0结束)的连接到str1,
//	//str2//字符数组名不可更改
//	char* p = str2;
//	p = "sdff";//
//	strncat(str1, str2, 4);// 将str2的前4个字符连接到str1后面
//	printf("%s", str1);
//}
//	strcpy(str1, "wo\0");//修改字符串只能用strcpy函数
//	printf("%s", str1);
//	//strcmp 在比较时遇到\0结束
//	//str1<str2 strcmp的返回值-1
//	//str1>str2 strcmp的返回值1
//	//str1 == str2 的返回值为0
//	printf("%d", strcmp(str1, str2));
//}
//int main() {
//	char buf[128]="";
//	//sprintf返回的是组包有多少个;
//
//	int len = sprintf(buf, "你%c好%s", 0,"koda");//将零散的字符组成完整的包发布到网上去
//	printf("%s,%d\n", buf,len);
//	printf("%d", strlen(buf));//不能用\0 添加到里面因为遇到\0 就结束计数
//	char* c = buf;
//	char *p = "2018:04:03"; // p指向"2018:04:03"
//	int  year, mouth, day;
//
//	sscanf(p, "%d:%d:%d", &year, &mouth, &day);
//	printf("%s,%s",c,p);
//}