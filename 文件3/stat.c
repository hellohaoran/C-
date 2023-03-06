#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
int main() {
	struct stat buf; // 用于存储stat结构体的信息;
	int ret = 0;
	ret = stat("./ok.txt",&buf);
	if (ret < 0) {
		printf("file not found");
	}
	printf("%d\n", buf.st_size); // 求buf的大小;


}