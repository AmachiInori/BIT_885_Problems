/* 
 * Chinese Comment by GB2312
 * 
 * ���Գ���
 * 
 * ��Ŀ����
 * ʹ�õݹ鷽����д������ʵ�ֽ�������ַ������򱣴� (6��)
 * 
 * �ؼ�Ҫ��
 * - C�����ַ����ĳ�����λ�ȡ��
 * - �ݹ顢�ݹ��ֹ����
 * - ��������ַ���(gets puts) (�ڴ�����δ����)
*/

# include "../Problems/2004-1-1.c"
# include <string>
# include <iostream>

int main() {
    std::string test;
    std::getline(std::cin, test);
    char* test_char = (char*)test.c_str();
    reverse(test_char);
    std::cout << test.c_str();

    return 0;
}