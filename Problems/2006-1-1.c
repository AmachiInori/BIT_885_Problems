/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ��д���������õݹ鷽��ʵ�ֽ�������ַ����������
 * 
 * ����
 * �����ݹ飬Ϊ�˿��ݹ�����ݹ飬ûʲô��˼��
*/

# include <stdio.h>
# include <string.h>

void __reverse_output(char* _str, unsigned int loca, unsigned int length) {
    if (loca >= length) return;
    __reverse_output(_str, loca + 1, length);
    printf("%c", _str[loca]);
}

void reverse_output() {
    char _str[1024];
    gets(_str);
    __reverse_output(_str, 0, strlen(_str));
}