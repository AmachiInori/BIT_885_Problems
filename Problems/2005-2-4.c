/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ��֪һ���޷�������n��дһ�㷨������ת��Ϊ8��������Ҫ������ջ��ʵ�֡�
 * 
 * ����
 * ûɶ��˼���⣬Ϊ����ջ����ջ��
 * ���п��Խ���ջ����ADT���ã��������ֽ���и�ԣ������򵥵�ʵ��һ�¡�
 * 
 * Ҫ��
 * - ��ջADT
*/

# include "../Common/Lists.hpp"
# include <malloc.h>
# include <stdio.h>

typedef node_int* stack;

stack initstack() {
    stack res = (stack)malloc(sizeof(node_int));
    res->next = 0;
    res->value = 0;
    return res;
}

int empty(stack sta) {
    return sta->next == 0;
}

void push(stack sta, int value) {
    node_int* temp = (node_int*)malloc(sizeof(node_int));
    temp->next = sta->next;
    temp->value = value;
    sta->next = temp;
}

int pop(stack sta) {
    node_int* temp = sta->next;
    int res = temp->value;
    sta->next = sta->next->next;
    free(temp);
    return res;
}

// �������ݿ���ʱ����Ҫ����Բ�д

void trans(int n) {
    stack numStack = initstack();
    while (n) {
        push(numStack, n % 8);
        n /= 8;
    }
    while (!empty(numStack)) {
        int temp = pop(numStack);
        printf("%d", temp);
    }
}