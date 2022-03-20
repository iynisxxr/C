#include <stdio.h>

// 指针 就是 内存

int main()
{
    int a = 10; // a在内存中要分配空间 = 4字节

    printf("%p\n", &a); // %p打印地址的, &a是指向变量a的内存地址
    // 其中&是指向内存地址

    int* pa = &a; // *pa = &a说明pa指向的是内存地址, int说明指向的对象的int类型
    // pa是用来存放地址的, C语言中pa叫做指针变量
    // *说明pa是指针变量
    // int说明pa指向的对象是int类型

    char ch = "w";
    char* pc = &ch;

    int b = 10;

    int* pb = &b;

    *pb = 20; // *解引操作, *pb就是通过pa里边的地址, 找到a

    printf("%d\n", b); // b的结果因为内存地址改变, 导致值也随着改变


    // 指针变量的大小
    printf("%d\n", sizeof(char*));
    printf("%d\n", sizeof(short*));
    printf("%d\n", sizeof(int*));
    printf("%d\n", sizeof(long*));
    printf("%d\n", sizeof(long long*));
    printf("%d\n", sizeof(float*));
    printf("%d\n", sizeof(double*));
    // 指针大小是相同的, 指针需要多大空间取决于地址存储需要多大
    // 32位 - 32bit - 4byte
    // 64位 - 64bit - 8byte
    return 0;
}
