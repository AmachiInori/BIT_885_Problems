/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ����Խ����������������㷨
 * 
 * ����
 * ��������������㷨��
 * 
 * Ҫ��
 * - �������������
*/
# include "../Problems/2005-2-2.c"
# include <vector>

int main() {
    std::vector<int> test = {5,1,2,4,3,8,7,6,9,12};
    int_tree_node* res = BST_build(&*test.begin(), test.size());
    bin_tree_algo::print_tree(res);
    return 0;
}