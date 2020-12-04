/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ��֪�ö�������洢���������Ա�д�ж����Ŷ������Ƿ���ȵ��㷨����д���㷨�Ļ���˼·��
 * 
 * ����
 * ��������ȼ��������Ľڵ��ֵ��ȫ��ȡ�������ǿ�����BFS����DFS��
 * ���ǵ�C������û���ֳɵĶ���ADT�����е���ջ֡����ѡ��DFS
 * 
 * Ҫ��
 * - ��������������ȱ���
 * - C������bool����
 * 
 * ԭ������Ҫ�ڴ��ĳ����и����������ڵ��������Ϊ���Է��㣬�˴����ڵ�ṹ��������˲����ļ����С�
 * ���Ǽٶ�����������������:
 *  struct int_tree_node {
        value_type value;
        int_tree_node *left;
        int_tree_node *right;
    };
 * 
 * ��չ
 * ֻ��Ҫ�Ķ������е�һ�оͿ���ʵ�֡��ж������������Ƿ���ȫ��Գơ�������޸ģ�
*/

# include "../Common/BinaryTree.hpp"

/* �����Ҫ�����������У�������������ε�ע�Ͳ�ȥ��include��Ȼ���Զ���һ��main */
/*
struct int_tree_node {
    value_type value;
    int_tree_node *left;
    int_tree_node *right;
};
*/

int compare_trees(int_tree_node *first, int_tree_node* second) {
    if (!(first && second)) {
        if (first || second) return 0;
        else return 1;
    }
    if (first->value != second->value) return 0;
    return compare_trees(first->left, second->left) && compare_trees(first->right, second->right);
}