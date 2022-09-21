/**
 * File : test01.c
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/20 
 */
# include <stdio.h>

int main() {
    // 基本数据类型转换
    /*
     * 数据有不同的类型，不同类型数据之间进行混合运算时必然涉及到类型的转换问题。
     * 转换的方法有两种：
         自动转换(隐式转换)：遵循一定的规则,由编译系统自动完成。
         强制类型转换：把表达式的运算结果强制转换成所需的数据类型。
     * 类型转换的原则：占用内存字节数少(值域小)的类型，向占用内存字节数多(值域大)的类型转换，以保证精度不降低。
     */
    char c1 = '0';
    int num1 = c1;
    double d1 = num1;
    printf("d1:%f\n", d1);

    // 多种类型混合运算的时候，会自动将其转换为精度大的进行运算
    short s1 = 10;
    int num2 = 20;
    int num3 = s1 + num2;
    printf("num3=%d\n", num3);

    // 类型字节数不同，转换成字节数大的；相同，若有无符号，则转成无符号
    // 赋值运算中，两边数据类型不同的时候，右边的类型转为左边的类型（右精度大于左，数据缺失）
    float f1 = 1.1f;
    double d2 = 4.556565665;
    f1 = d2;
    printf("f1=%f", f1);

    // 强制类型转换


    return 0;
}