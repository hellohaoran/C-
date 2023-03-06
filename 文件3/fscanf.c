#include<stdio.h>
int main02() {
	FILE* fp = fopen("./test.txt", "r");
	int year, month, day;
	fscanf(fp, "%d:%d:%d\n", &year, &month, &day);
	printf("%d:%d:%d", year, month, day);
}