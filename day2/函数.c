#include <stdio.h>

int add(int num1, int num2){
    int sum = 0;
    sum = num1 + num2;
    return sum;
}

int main(){
    int num1 = 10;
    int num2 = 20;
    // 调用函数
    int sum = add(num1, num2);
    // 打印sum
    printf("%d", sum);
    
    return 0;
}