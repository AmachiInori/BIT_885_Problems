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
*/

# include "../Problems/2004-2-3.c"
# include <iostream>

int main() {
    int_tree_node* test1 = bin_tree_algo::build_tree({1,2,3,4,5,114514,7,8});
    int_tree_node* test2 = bin_tree_algo::build_tree({1,2,3,5,5,114514,7,8});
    std::cout << compare_trees(test1, test2);
    return 0;
}