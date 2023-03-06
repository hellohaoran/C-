#include<stdio.h>
#include"type.h"
int main09() {
	FILE* fp = fopen("./fseek.txt", "w");
	if (fp) {
		perror("");
	}
	fputs("kingdomright", fp);
	fseek(fp, 0, SEEK_SET);
	fputs("ko", fp);
	//rewind(fp);
	printf("%d", ftell(fp)); // ftell 表示当前指针相对于 开始指针的位置;


}