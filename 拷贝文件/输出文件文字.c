#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_NO_SECRUE_WARNINGS_
int main04()
{
	//�ļ��ɶ���д:r+:��������ļ�//���ļ��������򲻻ᴴ��
	//�ļ��ɶ���д:w+:������ļ�//���ļ���������ᴴ��
	//�ļ��ɶ�:r//���ļ��������򲻻ᴴ��
	//�ļ���д:w;����ļ���д
	//�ļ�׷��:a ,���ļ������ļ�ĩβ����,���ļ��������򴴽�
	//�ļ�׷��:a+:���ļ�������,�����ļ�
	//fclose('fp')�ǹر��ļ�,
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
