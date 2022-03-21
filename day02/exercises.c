#include <stdio.h>

/*
 * 1.编写一个程序，调用一次 printf()函数，把你的姓名打印在一行。
 * 再调用一次 printf()函数，把你的姓名分别打印在两行。
 * 然后，再调用两次printf()函数，把你的姓名打印在一行。
 * 输出应如下所示:
 * iynisxxr Yan
 * iynisxxr
 * Yan
 * iynisxxr Yan
 */
int exercises_1(){
    printf("iynisxxr Yan\n");
    printf("iynisxxr\nYan\n");
    printf("iynisxxr ");
    printf("Yan");
    return 0;
}

/*
 * 2.编写一个程序，打印你的姓名和地址。
 */
int exercises_2(){
    printf("iynisxxr Yan\n");
    printf("GUDNGDONG\n");
    return 0;
}

/*
 * 3.编写一个程序把你的年龄转换成天数，并显示这两个值。
 * 这里不用考虑闰年的问题。
 */
int exercises_3(){
    int age = 22;
    int day = age * 365;
    printf("年龄:%d\n", age);
    printf("天数:%d\n", day);
    return 0;
}

/*
 * 4.编写一个程序，生成以下输出：
 * For he's a jolly good fellow!
 * For he's a jolly good fellow!
 * For he's a jolly good fellow!
 * Which nobody can deny!
 * 除了 main()函数以外，该程序还要调用两个自定义函数：
 * 一个名为jolly()，用于打印前 3 条消息，调用一次打印一条；
 * 另一个函数名为deny()，打印最后一条消息。
 */
int jolly(){
    printf("For he's a jolly good fellow!\n");
    return 0;
}
int deny(){
    printf("Which nobody can deny!\n");
    return 0;
}

/*
 * 5.编写一个程序，生成以下输出：
 * Brazil, Russia, India, China
 * India, China,
 * Brazil, Russia
 * 除了main()以外，该程序还要调用两个自定义函数：一个名为br()，
 * 调用一次打印一次“Brazil, Russia”；另一个名为ic()，
 * 调用一次打印一次“India,China”。其他内容在main()函数中完成。
 */
int br(){
    printf("Brazil, Russia");
    return 0;
}
int ic(){
    printf("India, China");
    return 0;
}

/*
 * 6.编写一个程序，创建一个整型变量toes，并将toes设置为10。
 * 程序中还要计算toes的两倍和toes的平方。
 * 该程序应打印3个值，并分别描述以示区分。
 */
int exercises_6(){
    int toes = 10;
    printf("toes:%d\n", toes);
    printf("toes的两倍:%d\n", toes*2);
    printf("toes的平方:%d\n", toes*toes);
    return 0;
}

/*
 * 7.许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输出：
 * Smile!Smile!Smile!
 * Smile!Smile!
 * Smile!
 * 该程序要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程序的需要使用该函数。
 */
int exercises_7(){
    printf("Smile!");
    return 0;
}

/*
 * 8.在C语言中，函数可以调用另一个函数。编写一个程序，
 * 调用一个名为one_three()的函数。该函数在一行打印单词“one”，
 * 再调用第2个函数two()，然后在另一行打印单词“three”。
 * two()函数在一行显示单词“two”。
 * main()函数在调用 one_three()函数前要打印短语“starting now:”，
 * 并在调用完毕后显示短语“done!”。
 * 伪代码：
 * one_three(){
 *     打印one;
 *     调用two()函数;
 *     打印three;
 * }
 * two(){
 *     打印two
 * }
 */
int one_three(){
    printf("one\n");
    two();
    printf("three\n");
    return 0;
}
int two(){
    printf("two\n");
    return 0;
}

int main(){

    exercises_1();
    exercises_2();
    exercises_3();

    jolly();
    jolly();
    jolly();
    deny();

    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");

    exercises_6();

    exercises_7();
    exercises_7();
    exercises_7();
    printf("\n");
    exercises_7();
    exercises_7();
    printf("\n");
    exercises_7();
    printf("\n");

    printf("starting now:\n");
    one_three();
    printf("done!\n");
    return 0;
}
