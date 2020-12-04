/* 
 * Chinese Comment by GB2312
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
 * Ϊ���Է��㣬�˴�����ڵ�ṹ������������ı�(��node��Ϊnode_int)
 * �Ҿ��������˲����ļ����С�
 * 
*/

/* �����Ҫ�������У�������������ε�ע�� */
/*
struct node_int {
    int value;
    struct node_int* next; 
};
*/

# include "stdio.h"
# include "../Common/Lists.hpp"

void findMin(node_int* head, unsigned int length) {
    node_int *min_node = head;
    for (unsigned int i = 0; i < length; i++, head = head->next) {
        if (head->value < min_node->value) min_node = head;
    }
    printf("%d", min_node->value);
}