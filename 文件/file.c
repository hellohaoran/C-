#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main01() {

	FILE* fp = fopen("./asd.txt", "wb");
	char buf[12] = {97,98,-1,25,36}; // 将ascii码值赋给这几个元素
	for (int i = 0; i < sizeof(buf) / sizeof(buf[0]); ++i) {
		fputc(buf[i], fp);
	}
	fclose(fp);
}