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
# include "../Problems/2005-2-3.c"
# include <vector>

int main() {
    std::vector<int> test = {5,1,2,4,3,8,7,6,9,12};
    int_tree_node* res = bin_tree_algo::build_tree(test);
    std::cout << number_of_node(res);
    return 0;
}