#include <stdio.h>

# define MAX 1000 // 定义一个常量MAX, 值为1000

# define ADD(x, y) x+y // 定义一个宏, 传进去x和y, 进行运算 

# define NUE(x, y) ((x)+(y)) // x和y都可能是式子, 要用括号包起来, 毕竟严谨

// 定义一个函数
int add(int num1, int num2){
    int sum = 0;
    sum = num1 + num2;
    return sum;
}

int main(){
    // 函数的用法
    int num1 = 10;
    int num2 = 20;
    // 调用函数
    int sum = add(num1, num2);
    // 打印sum
    printf("%d", sum);
    

    // define用法
    printf("%d\n", MAX); // 结果为1000

    printf("%d\n", ADD(3, 4)); // 结果为7

    printf("%d\n", 4*ADD(3, 4)); // 结果为16, 不是28
    // 相对于 4*3+4

    printf("%d\n", 4*NUE(3, 4)); //结果为28

    return 0;
}