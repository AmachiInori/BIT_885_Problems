/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * �����ͳ�ƶ�����Ҷ�ڵ�����ĵݹ��㷨
 * 
 * ����
 * ��2��򵥣��׸�DFS�ݹ��⡣���ж϶�������ͬ���㷨����һ�¡�
 * 
 * Ҫ��
 * - Ҷ�ӽڵ�
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

int number_of_node(int_tree_node *root) {
    if (!root) return 0;
    if (!(root->left || root->right)) return 1;
    return number_of_node(root->left) + number_of_node(root->right);
}