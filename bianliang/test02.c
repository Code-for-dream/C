/**
 * File : test01.c
 * Author: ������ţ��׷����'
 * Date: 2022/9/20 
 */
# include <stdio.h>

int main() {
    // ��������
    /*
     * ��C�����У�û���ַ������ͣ�ʹ���ַ������ʾ�ַ���
     * �ڲ�ͬ��ϵͳ�ϣ��������������ֽڳ��Ȳ�һ����int2����4
     */
    short a1 = 10;
    int a2 = 20;
    long a3 = 30;
    float f1 = 1.5f;
    double d1 = 1.5;
    char c1 = 'a';
    char c2[] = "abc";

    /*
     * ��int����Ϊ��̽��
     */
    printf("==================int==================");
    int a4 = 100;
    signed int a5 = 100;
    unsigned int a6 = 100;
    printf("int���ֽ�����%d\n", sizeof(a4));
    printf("signed int���ֽ�����%d\n", sizeof(a5));
    printf("unsigned int���ֽ�����%d\n", sizeof(a6));
    printf("�޷��ţ�%d\n", a6);

    // long �� long long
    printf("==================long & long long==================");
    long num1 = 12147483647;  // ������Χ��ʹ�� long long ����
    long long num2 = 12147483647;
    printf("long��%ld\n", num1);
    printf("long long��%lld\n", num2);

    // float ������ 6λ  �� double ˫���� 15λ ��Ĭ�ϸ������ͣ�
    // �ڻ����д�ŵ���ʽ�������� = ����λ + ָ��λ + β��λ
    // λ�����ֿ��ܶ�ʧ����ɾ�����ʧ
    printf("==================float & double==================");
    float f = 100.5f;
    float f01 = 100.5F;
    double salary = 10000.56;
    double num01 = 1.3;
    double num02 = 4.5;
    double sum = num01 + num02;
    printf("sum=%.2f\n", sum);
    printf("float���ֽ�����%d\n", sizeof(f));
    printf("double���ֽ�����%d\n", sizeof(salary));
    // ��ѧ������
    double d01 = 3.14e2; // 3.14*(10^2)
    double d02 = 3.14e-2; // 3.14*��10^-2��
    printf("d01=%f\n", d01); // Ĭ�ϱ���С��6λ
    printf("d02=%f\n", d02);

    // �ַ����� char
    printf("==================char==================");
    char ch = 'a';
    printf("sizeof(ch) = %u\n", sizeof(ch));

    printf("ch[%%c] = %c\n", ch); //��ӡ�ַ�
    printf("ch[%%d] = %d\n", ch); //��ӡ��a�� ASCII��ֵ

    char A = 'A';
    char a = 'a';
    printf("a = %d\n", a); //97
    printf("A = %d\n", A); //65
    printf("A = %c\n", 'a' - 32); //Сдaת��дA
    printf("a = %c\n", 'A' + 32); //��дAתСдa

    ch = ' ';
    printf("���ַ���%d\n", ch); //���ַ�ASCII��ֵΪ32
    printf("A = %c\n", 'a' - ' '); //Сдaת��дA
    printf("a = %c\n", 'A' + ' '); //��дAתСдa
    char ch0;
    printf("������ch0��ֵ��");
    //��Ҫ�ӡ�\n��
    scanf("%c", &ch0);
    printf("ch0 = %c\n", ch0); //��ӡch���ַ�

    char str[] = "abc"; // ��char�����ʾ�ַ���

    /*
     * bit(λ�������������С�洢��λ
     * byte���ֽڣ����������л����洢��Ԫ
     * 1 byte = 8 bit
     */
    /**
     * ϸ�ڣ�
     *  �������͵Ĵ洢��С�����ϵͳ��ϵͳλ���ͱ������йأ�Ŀǰͨ�õ���64λϵͳλ��
     *  ��ʵ�ʹ����У�C����ͨ��������linux��unix����ϵͳ��
     */

    return 0;
}