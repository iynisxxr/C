/*
1.你刚被MacroMuscle有限公司聘用。该公司准备进入欧洲市场，需要
一个把英寸单位转换为厘米单位（1 英寸=2.54 厘米）的程序。该程序要提
示用户输入英寸值。你的任务是定义程序目标和设计程序。
*/

#include <stdio.h>

int main(){

    float inch; // 用float是因为用户可能输入的浮点数
    
    printf("请输入英寸:");
    scanf("%f", &inch); // scanf用于用户输入, 类似python的input
    // %f用于接收浮点型的数值

    printf("%f英寸 = %f厘米\n", inch, inch*2.54);

    return 0;
}