/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ��д����ʵ�ִӼ��������������ַ����������Ǻϲ�֮��ASCII��ֵ�Ӵ�С��������Ļ�������ͬ���ַ������һ�Ρ�
 * 
 * ����
 * �㷨��2004-1-2��ȫһ�£�ʹ�ü���������˻������
 * 
 * Ҫ��
 * - ����������˻����
*/
# include <stdio.h>

int main() {
    int index[256] = { 0 };
    char str1[1024], str2[1024];  // ��Ȼ����д���ܲ�Ư�������������ȣ��������(��������ƪ�����úܳ�)
    gets(str1);
    gets(str2);
    for (unsigned int i = 0; str1[i]; i++) index[str1[i]]++;
    for (unsigned int i = 0; str2[i]; i++) index[str2[i]]++;
    for (unsigned int i = 0; i < 256; i++) {
        if (index[i]) putchar(i);
    }
    return 0;
}