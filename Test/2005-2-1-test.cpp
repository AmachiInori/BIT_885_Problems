/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ����һ����ͷָ��Ϊh1�ĵ����������һ���㷨��ͨ������һ�����������������нڵ�����ӷ�����ת��
 * Ҫ����ת֮��Ľ������ı�ͷָ��h1ָ��ԭ��������һ���ڵ㡣
 * 
 * ����
 * ��׼�ķ�ת�����⡣
 * ��ת����ʵ���Ͼ��ǽ���������Ҫ��"��ת"��������Ŀ־塣
 * ������https://leetcode-cn.com/problems/reverse-linked-list/����ϰ��
 * �ǳ����͵ĳ���
 * ���û�а����ٳ���д��һ���򣬽��鱳��֮��
 * 
 * Ҫ��
 * - ��ת����
*/
# include "../Common/Lists.hpp"
# include "../Problems/2005-2-1.c"

int main() {
    list_algo::node<int> *test = list_algo::list_get({1, 2, 3, 4, 5, 6, 7});
    list_algo::node<int> *res = reverse_list(test);
    list_algo::print_list(res);
    return 0;
}