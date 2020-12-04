/* 
 * Chinese Comment by UTF-8
 * 
 * ��Ŀ����
 * ʹ�õݹ鷽����д������ʵ�ֽ�������ַ������򱣴� (6��)
 * 
 * ����
 * �������дһ��ѭ���Ļ��ǳ����ס�
 * ��Ҫ����ͨ��C�Ļ��������Լ�β�ݹ��ѭ����ת����
 * 
 * Ҫ��
 * - C�����ַ����ĳ�����λ�ȡ��
 * - ѭ��תβ�ݹ�
 * - ��������ַ���(gets puts) (�ڴ�����δ����)
*/

# include <stdio.h>

void __reverse(char* str, unsigned int left, unsigned int right) {
    if (left >= right) return;
    char temp_char;
    temp_char = str[left]; // �����ַ�
    str[left++] = str[right];
    str[right--] = temp_char;
    __reverse(str, left, right); // �ݹ鴫�ݵ���
}

void reverse(char* str) { // ��������
    unsigned int length = 0; 
    for (length = 0; str[length]; length++); // ��ȡ�ַ�������
    __reverse(str, 0, length - 1);
}