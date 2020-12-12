/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ��һ�����뵹�������õ���������ԭ���ķ���������һ�����������ķ������������Ϊ�Գ�����
 * �󲻳���2006�����Գ�����
 * 
 * ����
 * �����㷨��2005-1-2һ�£��׸�����д��
*/

# include "stdio.h"

int reverse_int(int n) {
    int res = 0;
    while (n) {
        res *= 10;
        res += n % 10; 
        n /= 10;
    }
    return res;
}

int main() {
    for (int i = 0; i <= 2006; i++) {
        if (i == reverse_int(i)) printf("%d\n", i); 
    }
    return 0;
}