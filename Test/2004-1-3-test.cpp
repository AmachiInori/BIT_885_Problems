/* 
 * Chinese Comment by UTF-8
 * 
 * ��Ŀ����
 * ��֪��һ������n���ڵ�Ļ��������������£�
    struct node {
        int value;
        struct node* next; 
    };
 * ��д���������������е�value��Ա��ֵ��С�ڵ㣬�������valueֵ
 * 
 * ����
 * �����ע�Ȿ��Ŀ�������ǻ��α��ʲ�������ָ����Ϊnull����Ϊ�����Ľ�ֹ����
 * 
 * Ҫ��
 * - �����������
 * - ��ֹ����������濼��
 * 
 * Ϊ���Է��㣬�˴�����ڵ�ṹ������������ı�(��ʵ��������дģ��ģ������뵽����C)
 * �Ҿ��������˲����ļ����С�
 * 
*/
# include "../Common/Lists.hpp"
# include "../Problems/2004-1-3.c"

int main() {
    std::pair<node_int*, unsigned int> test = list_algo::list_ring_get({6, 3, 4, 6, 7, 2, 3, 5, 1});
    findMin(test.first, test.second);
    return 0;
}