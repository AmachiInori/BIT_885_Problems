/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ���������������������㷨
 * 
 * ����
 * ����BFS���򵥵úܡ�
*/

# include "../Problems/2006-2-1.c"
# include <vector>

int main() {
    int_tree_node* test1 = bin_tree_algo::build_tree({1,2,3,4,114514,114514,7,8,114514,114514,9});
    print_tree(test1);
    BFS(test1);
    return 0;
}