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

/* �����Ҫ�����������У�������������ε�ע�Ͳ�ȥ��include��Ȼ���Զ���һ��main */
/*
struct node_int {
    int value;
    struct node_int* next; 
};
*/

node_int* reverse_list(node_int* h1) {
    node_int *current = 0, *__next = h1;
    while (__next) {
        node_int* temp_next = __next->next;
        __next->next = current;
        current = __next;
        __next = temp_next;
    }
    return current;
}