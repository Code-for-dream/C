/**
 * File : test01.c
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/20 
 */
# include <stdio.h>

int main() {
    // 声明变量
    int a = 1;
    int b = 3;
    b = 89;
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    int num = 1;
    double score = 2.3;
    char gender = 'A';
    char name[] = "小红";
    printf("num=%d score=%.2f gender=%c name=%s", num, score, gender, name);

    return 0;
}