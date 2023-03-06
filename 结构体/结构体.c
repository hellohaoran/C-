// 结构体.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
//struct stu {
//	int id;
//	int age;
//	char name[128];
//}a; // 定义结构体变量 ;
//struct heima {
//	struct stu s;
//	char subject[128];
//};
//int main()
//{
//	struct stu d = { 1,2,"ajjd" };
//	struct stu k = { .age = 26 };
//	//k.name = "koskd"; // 数组名不能用于操作
//	strcpy(k.name, "sdad"); // 将sdad 复制到 k.name 
//	//->运算符是通过结构体的地址操作结构体成员 
//	strcpy((&d)->name , "ssdfg");
//	(&d)->id = 26;
//	(&d)->age = 56;
//
//
//
//
//}


#define _CRT_NO_SERCUE_WARNINGS

//int main() {
//	struct stu num[5] = { {1,20,"lucy"},{2,22,"koko"},{3,25,"junjun"},{4,26,"lili"},{5,27,"junjju"} };
//	for (int i = 0; i < sizeof(num) / sizeof(num[0]); ++i) {
//		printf("%d %d %s\n", num[i].id, num[i].age, num[i].name);
//	}
//	struct heima st;
//	st.s.age = 25;
//	st.s.id = 2;
//	strcpy(st.s.name, "kong");// 将kong拷贝到 st.s.name ;
//	
//}
// 
// 
// //将一个结构体变量拷贝到另个结构体中
// memcpy_str(struct stu* x, struct stu* y) {
//
//	memcpy(x, y, sizeof(struct stu)); // 字符串是在常量区只能指向； 因此不能赋值；
//	//strcpy(x->name, y->name);
//	
//}
//str_cpy(char **p,char**q) {
//	p = q;
//
//}
// struct tea {
//	int id;
//	char* p;
//};
//int main() {
//	//struct stu a,b;
//	//a.id = 10;
//	//a.age = 25;
//
//	//strcpy(a.name, "year");
//	//memcpy_str(&b, &a);
//	/*b = a;*/
//	printf("%d %d %s", b.id, b.age,b.name);
//	// 
/////////////////
//	//char* p;//野指针
//	//p = "name";
//	//char* q; // 野指针
//	//str_cpy(&q, &p); // 字符串的地址没有地址
//	//printf("%s", q);
//	//char* p=NULL;
//	//p = 'a';
//	////strcpy(p, "name");
//	struct stu* p = malloc(sizeof(struct stu)); //必须直接使用malloc来分配指针所指向的空间; 
//	//不然会变成野指针
//
//
//
//	/*p->id = 25;
//	strncpy(p->name , "haoran",sizeof("haoran"));
//	p->age = 15;*/
//
//	struct tea t;
//	struct tea* tmp = &t;
//	tmp->p = "haorna";
//	tmp->p= (char*)malloc(128);
//	strcpy(tmp->p, "ko"); // tmp->p为野指针指向非法 ; 
//	printf("%s", tmp->p);
//}
//struct b {
//	int b;
//};
//struct tea {
//	int* p;
//	struct b *t; // 定义了一个struct b 类型的指针变量 t 
//};
//int main() {
//	//struct tea* q= (struct tea*)malloc(sizeof(struct tea));
//	//q->p = (int* )malloc(sizeof(int));
//	//q->t = (struct b*)malloc(sizeof(struct b)); 
//	//*(q->p) = 25;
//	//q->t->b = 15;
//	//printf("%d %d", *q->p, q->t->b);
//	//char* i = "hdao";
//	//printf("i\t %p\t //只读数据(文字常量区)\n", i);\
//
//	
//}
// 


///////////////////////////////
//int e;
//static int f;
//int g = 10;
//static int h = 10;
//int main() {
//
//	int a;
//	int b = 10;
//	static int c;
//	static int d = 10;
//	char* i = "test";
//	char* k = NULL;
//
//	printf("&a\t %p\t //局部未初始化变量\n", &a);
//	printf("&b\t %p\t //局部初始化变量\n", &b);
//
//	printf("&c\t %p\t //静态局部未初始化变量\n", &c);
//	printf("&d\t %p\t //静态局部初始化变量\n", &d);
//
//	printf("&e\t %p\t //全局未初始化变量\n", &e);
//	printf("&f\t %p\t //全局静态未初始化变量\n", &f);
//
//	printf("&g\t %p\t //全局初始化变量\n", &g);
//	printf("&h\t %p\t //全局静态初始化变量\n", &h);
//
//	printf("i\t %p\t //只读数据(文字常量区)\n", i);
//
//	k = (char*)malloc(10);
//	printf("k\t %p\t //动态分配的内存\n", k);
//
//	return 0;
//}
// 
// 
//#include <stdio.h>
//int* fun()
//{
//	int a = 10;
//	return &a;//函数调用完毕，a释放
//}
#include<stdlib.h>
//int main(int argc, char* argv[])
//{
//	int* p = malloc(sizeof(int)); // 指针初始化用malloc分配空间
//	p = fun();
//	*p = 100; //操作野指针指向的内存,err
//	*p *= 2;
//	printf("%d", *p);
//	return 0;
//}
// 
// 
// 
// 
// 
// 
// 
struct stu {
	int id;
	char name[10];
};

//结构体作为参数
//void meminit(struct stu *st,int n) {
//	for (int i = 0; i < n; ++i) {
//		char buf[90];
//		sprintf(buf, "%d%d%d", i, i, i);
//		strcpy(st[i].name, buf);
//		st[i].id = i + 10;
//	}
//}
//int main() {
//	struct stu st[12];
//	memset(st, 0, sizeof(st));
//	meminit(st, sizeof(st) / sizeof(st[0]));
//	for (int i = 0; i < sizeof(st) / sizeof(st[0]); ++i) {
//		printf("%d %s\n", st[i].id, st[i].name);
//	}
//
// }
// 

// const修饰结构体指针

//int main() {
//	struct stu st;
//	struct stu sa;
//	struct stu const *p = &st; // 修饰的是*,使用时不能去修改指针指的值;
//	//*p.id = 25; // const修饰的不能去修改的值;
//	struct stu* const k = &st;//修饰的指针不能去修改指针的指向;
//	//k = &sa;
//
//
//
//
// }
// 



// 共用体
//union un{
//	char a;
//	short b;
//	int c;
//};
//struct k {
//	char a;
//	short b;
//	int c;
//}; //结构体存储时 按最大的数据类型对齐;
//
//int main() {
//	union un tmp;
//	tmp.a = 0x01;
//	tmp.c = 0x02040506;// short 将char覆盖
//	tmp.b = 0x0203; // 数据类型短的会将低位覆盖;
//	printf("%x\n", tmp.c); 
//	printf("%d\n", sizeof(struct k));
//	printf("%d\n", sizeof(union un));
//
//
//}
 

//大小端
//union st {
//	char buf[2];
//	short b;
//
//};
//int main() {
//	union st t;
//	t.b = 0x0304;
//	printf("%x\n", t.buf[0]);
//	printf("%x\n", t.b);
//
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
