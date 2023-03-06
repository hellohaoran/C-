#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main01() {
	FILE* yu = fopen("./asd.txt", "w");


	char ch[12] = "54511";
	int j = 0;
	while (ch[j] != '\0') {
		fputc(ch[j++], yu);
	}
	fclose(yu);
}