/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ���������������������㷨
 * 
 * ����
 * ����BFS���򵥵úܡ�
 * �ⶼ�����㿼�����Ӽ������
*/

# include "../Common/BinaryTree.hpp"
# include "../Common/CQueue.hpp"

/* �����Ҫ�����������У�������������ε�ע�Ͳ�ȥ��include��Ȼ���Զ���һ��main */
/*
struct int_tree_node {
    value_type value;
    int_tree_node *left;
    int_tree_node *right;
};
*/

void BFS_handle(int_tree_node* node) {
    printf("%d ", node->value);
}

void BFS(int_tree_node* root) {
    CQueue_node_int my_queue;
    init_queue(my_queue);
    queue_push(my_queue, root);
    int BFS_size;
    while (BFS_size = queue_size(my_queue)) {
        for (int i = 0; i < BFS_size; i++) {
            int_tree_node* current = queue_pop(my_queue);
            BFS_handle(current);
            if (current->left) queue_push(my_queue, current->left);
            if (current->right) queue_push(my_queue, current->right);
        }
    }
}