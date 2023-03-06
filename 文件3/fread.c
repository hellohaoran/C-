#include<stdio.h>
#include"type.h"

int main04() {
	FILE* fp = fopen("./ok.txt", "r");
	FILE* fw = fopen("./ok2.txt", "w");
	STU st[5];
	memset(st, 0, sizeof(st));
	int i = 0;
	fread(st, 1, sizeof(st), fp);
	for (int i = 0; i < sizeof(st) / sizeof(st[0]); ++i) {
		printf("%d,%s\n", st[i].id, st[i].name);
	}
	fwrite(st, 1, sizeof(st), fw);
}