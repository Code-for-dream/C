/**
 * File : test01.c
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/20 
 */
# include <stdio.h>

int main() {
    // 数据类型
    /*
     * 在C语言中，没有字符串类型，使用字符数组表示字符串
     * 在不同的系统上，部分数据类型字节长度不一样，int2或者4
     */
    short a1 = 10;
    int a2 = 20;
    long a3 = 30;
    float f1 = 1.5f;
    double d1 = 1.5;
    char c1 = 'a';
    char c2[] = "abc";

    /*
     * 以int类型为例探索
     */
    printf("==================int==================");
    int a4 = 100;
    signed int a5 = 100;
    unsigned int a6 = 100;
    printf("int的字节数：%d\n", sizeof(a4));
    printf("signed int的字节数：%d\n", sizeof(a5));
    printf("unsigned int的字节数：%d\n", sizeof(a6));
    printf("无符号：%d\n", a6);

    // long 和 long long
    printf("==================long & long long==================");
    long num1 = 12147483647;  // 超出范围，使用 long long 类型
    long long num2 = 12147483647;
    printf("long：%ld\n", num1);
    printf("long long：%lld\n", num2);

    // float 单精度 6位  、 double 双精度 15位 （默认浮点类型）
    // 在机器中存放的形式：浮点数 = 符号位 + 指数位 + 尾数位
    // 位数部分坑能丢失，造成精度损失
    printf("==================float & double==================");
    float f = 100.5f;
    float f01 = 100.5F;
    double salary = 10000.56;
    double num01 = 1.3;
    double num02 = 4.5;
    double sum = num01 + num02;
    printf("sum=%.2f\n", sum);
    printf("float的字节数：%d\n", sizeof(f));
    printf("double的字节数：%d\n", sizeof(salary));
    // 科学计数法
    double d01 = 3.14e2; // 3.14*(10^2)
    double d02 = 3.14e-2; // 3.14*（10^-2）
    printf("d01=%f\n", d01); // 默认保留小数6位
    printf("d02=%f\n", d02);

    // 字符类型 char
    printf("==================char==================");
    char ch = 'a';
    printf("sizeof(ch) = %u\n", sizeof(ch));

    printf("ch[%%c] = %c\n", ch); //打印字符
    printf("ch[%%d] = %d\n", ch); //打印‘a’ ASCII的值

    char A = 'A';
    char a = 'a';
    printf("a = %d\n", a); //97
    printf("A = %d\n", A); //65
    printf("A = %c\n", 'a' - 32); //小写a转大写A
    printf("a = %c\n", 'A' + 32); //大写A转小写a

    ch = ' ';
    printf("空字符：%d\n", ch); //空字符ASCII的值为32
    printf("A = %c\n", 'a' - ' '); //小写a转大写A
    printf("a = %c\n", 'A' + ' '); //大写A转小写a
    char ch0;
    printf("请输入ch0的值：");
    //不要加“\n”
    scanf("%c", &ch0);
    printf("ch0 = %c\n", ch0); //打印ch的字符

    char str[] = "abc"; // 用char数组表示字符串

    /*
     * bit(位）：计算机中最小存储单位
     * byte（字节）：及单机中基本存储单元
     * 1 byte = 8 bit
     */
    /**
     * 细节：
     *  各种类型的存储大小与操作系统、系统位数和编译器有关，目前通用的以64位系统位置
     *  在实际工作中，C程序通常运行在linux、unix操作系统中
     */

    return 0;
}