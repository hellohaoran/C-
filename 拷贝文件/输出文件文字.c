#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_NO_SECRUE_WARNINGS_
int main04()
{
	//文件可读可写:r+:不会清空文件//若文件不存在则不会创建
	//文件可读可写:w+:会清空文件//若文件不存在则会创建
	//文件可读:r//若文件不存在则不会创建
	//文件可写:w;清空文件后写
	//文件追加:a ,打开文件并在文件末尾更改,若文件不存在则创建
	//文件追加:a+:若文件不存在,创建文件
	//fclose('fp')是关闭文件,
	FILE* fp = fopen("./asd.txt", "rb");

	if (NULL == fp) {
		perror("");
	}
	char buf[13] = "";
	/*for (int i = 0; (buf[i] = fgetc(fp))!=-1; ++i) {

	}*/
	int i = 0;
	while (feof(fp) == 0) {
		buf[i++] = fgetc(fp);
	}
	printf("%s", buf);
	fclose(fp);
	return 0;
}
