#include<stdio.h>
typedef struct STU {
	int id;
	char name[12];
}STU;
int main06() {
	STU st[10]={ {1,"lucy"},{2,"david"},{3,"spring"}};
	FILE* fp = fopen("./ok.txt", "w");
	fwrite(st, 1, sizeof(st), fp); // 从st中读 单位为1的， 数据块大小为 st的到 文件中；
	fclose(fp);
	FILE* p = fopen("./ok.txt", "r");
	char ch[125] = "";

	fprintf(p, "%s", ch);
	printf("%s", ch);
}