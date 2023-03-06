// switch.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main1()
{
    int s;
    scanf_s("%d", &s);
    int a;
    a = s % 4;
    switch (a) {
    case 0:
        printf("1hello");
        break;
    case 1:
        printf("2ok");
        break;
    case 2:
        printf("3 thank you");
        break;
    case 3:
        printf("4 ling");
        break;
    default:
        printf("zhexie");
        break;
    }
 
}
int main02() {
    int a = 0;
    int b = 1;
    printf("%d\n", !a);
    printf("%d\n", !0);
    printf("%d\n", !- 1);
    printf("%d", b++ ||a);
    printf("%d", b++ && a);//b++ 是先用后加
}
int main03() {
    int a = 1;
    int b = 2;
    int c = (a++, b++, a + b, 10, 200, a + b);//逗号表达式是将逗号的最后一个表达式的结果作为最终结果

    printf("%d", c);
}
int main06() {
    int sum = 0;
    int i = 0;
    while (i<=100) {
        sum = sum + i;
        ++i;
   }
    printf("sum = %d", sum);
    sum = 0;
    i = 0;
    do {
        sum += i;
        ++i;
    } while (i <= 100);
    printf("sum = %d", sum);
    sum = 0;
    i = 0;
    int j = 0;
    for (i = 0; i <= 2; ++i) {
        j = 0;
        while (j <= 3) {
            printf("i=%d,j=%d", i, j);
            ++j;
        }

        /*for (j = 0; j <= 3; ++j) {
            printf("i=%d,j=%d\n",i,j);
        }*/
    }
}
int main07() {
    int i = 0;
    for (i = 0; i < 5; ++i) {
        for (int j = 0; j < 3;++j) {
            if (j== 2) {
                break;
            }
            printf("i=%d,j=%d\n", i,j);
        }
    }
    printf("\r");
    goto  end;//强制跳转
    printf("%d", i);
end: return 0;
}
int main08() {
    char k;
    printf("%d\n", sizeof('a'));
    printf("%d\n", sizeof(k));
    printf("%d\n", sizeof("a"));
}
int main010() {
    int sum = 0;
    int i = 0;
    int num = 1;
    for (; i < 100; ++i) {
        
        sum = sum + num;
        num = -(++num);
        
    }
    printf("%d", sum);
}
int main09() {
    int m, n;
    int sum = 0;
    scanf_s("%d,%d", &m, &n);
    for (int i = m; i <= n; ++i)
    {
        if (i % 7 != 0 && i % 5 != 0) {
            sum += i;
        }
    }
    printf("不能被7和5整除的数之和为%d", sum);

}
int main() {
   /* int num;
    for (num = 0; num <= 100000; num++) {
        if (num % 2 == 1 && num % 3 == 2 && num % 5 == 4 && num % 6 == 5 && num % 7 == 0) {
            printf("num =%d\n", num);
        }
    }*/
   /* int i=0;
    while (1) {
        if ((i % 2 == 1) && (i % 3 == 2) && (i % 6 == 5) && (i % 7 == 0) && (i % 5 == 4)) {
            break;
        }
        ++i;
    }
    printf("%d", i);*/
    int num[10];
    printf("%d", sizeof(int[10]));
    printf("%d", sizeof(num));

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
