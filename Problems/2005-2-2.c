/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ����Խ����������������㷨
 * 
 * ����
 * ��������������㷨��
 * ����ϳ�����Ҫ�������߼��������ݸ塣
 * 
 * Ҫ��
 * - �������������
*/
# include "../Common/BinaryTree.hpp"

/* �����Ҫ�����������У�������������ε�ע�Ͳ�ȥ���ϱߵ�include��Ȼ���Զ���һ��main */
/*
struct int_tree_node {
    value_type value;
    int_tree_node *left;
    int_tree_node *right;
};
*/

# include <malloc.h>

int_tree_node* BST_build(int* array, unsigned int length) {
    if (!length) return 0;
    int_tree_node* root = (int_tree_node*)malloc(sizeof(int_tree_node));
    root->value = array[0];
    root->left = 0, root->right = 0;
    for (unsigned i = 1; i < length; i++) {
        int_tree_node* current = root;
        while (current) {
            if (current->value < array[i]) {
                if (current->right) {
                    current = current->right;
                } else {
                    current->right = (int_tree_node*)malloc(sizeof(int_tree_node));
                    current->right->value = array[i];
                    current->right->right = 0, current->right->left = 0;
                    break;
                }
            } else {
                if (current->left) {
                    current = current->left;
                } else {
                    current->left = (int_tree_node*)malloc(sizeof(int_tree_node));
                    current->left->value = array[i];
                    current->left->right = 0, current->left->left = 0;
                    break;
                }
            } 
        }
    }
    return root;
}