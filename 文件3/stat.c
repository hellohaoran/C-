#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
int main() {
	struct stat buf; // ���ڴ洢stat�ṹ�����Ϣ;
	int ret = 0;
	ret = stat("./ok.txt",&buf);
	if (ret < 0) {
		printf("file not found");
	}
	printf("%d\n", buf.st_size); // ��buf�Ĵ�С;


}