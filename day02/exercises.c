#include <stdio.h>

/*
 * 1.��дһ�����򣬵���һ�� printf()�����������������ӡ��һ�С�
 * �ٵ���һ�� printf()����������������ֱ��ӡ�����С�
 * Ȼ���ٵ�������printf()�����������������ӡ��һ�С�
 * ���Ӧ������ʾ:
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
 * 2.��дһ�����򣬴�ӡ��������͵�ַ��
 */
int exercises_2(){
    printf("iynisxxr Yan\n");
    printf("GUDNGDONG\n");
    return 0;
}

/*
 * 3.��дһ��������������ת��������������ʾ������ֵ��
 * ���ﲻ�ÿ�����������⡣
 */
int exercises_3(){
    int age = 22;
    int day = age * 365;
    printf("����:%d\n", age);
    printf("����:%d\n", day);
    return 0;
}

/*
 * 4.��дһ�������������������
 * For he's a jolly good fellow!
 * For he's a jolly good fellow!
 * For he's a jolly good fellow!
 * Which nobody can deny!
 * ���� main()�������⣬�ó���Ҫ���������Զ��庯����
 * һ����Ϊjolly()�����ڴ�ӡǰ 3 ����Ϣ������һ�δ�ӡһ����
 * ��һ��������Ϊdeny()����ӡ���һ����Ϣ��
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
 * 5.��дһ�������������������
 * Brazil, Russia, India, China
 * India, China,
 * Brazil, Russia
 * ����main()���⣬�ó���Ҫ���������Զ��庯����һ����Ϊbr()��
 * ����һ�δ�ӡһ�Ρ�Brazil, Russia������һ����Ϊic()��
 * ����һ�δ�ӡһ�Ρ�India,China��������������main()��������ɡ�
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
 * 6.��дһ�����򣬴���һ�����ͱ���toes������toes����Ϊ10��
 * �����л�Ҫ����toes��������toes��ƽ����
 * �ó���Ӧ��ӡ3��ֵ�����ֱ�������ʾ���֡�
 */
int exercises_6(){
    int toes = 10;
    printf("toes:%d\n", toes);
    printf("toes������:%d\n", toes*2);
    printf("toes��ƽ��:%d\n", toes*toes);
    return 0;
}

/*
 * 7.����о�������΢Ц�洦��ࡣ��дһ�������������¸�ʽ�������
 * Smile!Smile!Smile!
 * Smile!Smile!
 * Smile!
 * �ó���Ҫ����һ���������ú���������һ�δ�ӡһ�Ρ�Smile!�������ݳ������Ҫʹ�øú�����
 */
int exercises_7(){
    printf("Smile!");
    return 0;
}

/*
 * 8.��C�����У��������Ե�����һ����������дһ������
 * ����һ����Ϊone_three()�ĺ������ú�����һ�д�ӡ���ʡ�one����
 * �ٵ��õ�2������two()��Ȼ������һ�д�ӡ���ʡ�three����
 * two()������һ����ʾ���ʡ�two����
 * main()�����ڵ��� one_three()����ǰҪ��ӡ���starting now:����
 * ���ڵ�����Ϻ���ʾ���done!����
 * α���룺
 * one_three(){
 *     ��ӡone;
 *     ����two()����;
 *     ��ӡthree;
 * }
 * two(){
 *     ��ӡtwo
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
