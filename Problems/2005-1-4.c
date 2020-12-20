/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 有一个保存学生课程成绩的结构数组，保存学生的考号和课程成绩。
 * 请编写一个函数，将保存在结构数组中的数据按照课程成绩从高到低的顺序存放在一个单向链表中。
 * 结构体定义如下 
 *  struct student {
 *      int no;
 *      float score;
 * };
 * 
 * 分析
 * 是要求较高的一道题。
 * 朴素地想，可以使用链表的插入排序来解决这一问题。但必须想到插入排序的效率偏低，而链表不支持快速排序等折半排序法。
 * 故考虑先对数组进行从小到大的排序，再对链表执行头插法构建得到从大到小的链表。
 * 本实现要求较高，如无能力则可以使用链表插入排序。
 * 
 * 要点
 * - 链表的头插法构建
 * - malloc函数
 * - 快速排序qsort的库包含及调用
 * - 函数指针、void指针及指针类型转换
 * 
 * 背景知识
 * qsort方法中比较函数的返回值
 *  int compare(const void* a, const void* b)中：
 *  若返回值为负整数，则a会被排在b之前
 *  若返回值为正整数，则a会被排在b之后
 *  若返回值是0，则a和b不区分前后
*/
# include <stdlib.h> // 为了使用qsort和malloc

struct student {
    int no;
    float score;
};

struct node_stu {
    student value;
    node_stu* next;
};

int compare_stu(const void* a, const void* b) { // 考虑到本题目score是float，故不可轻易返回差值。
    return ((student*)a)->score < ((student*)b)->score ? 1 : -1;
}

node_stu* sort_student(student* array, unsigned int length) {
    if (!length) return 0;
    qsort(array, length, sizeof(student), compare_stu);
    node_stu* res = 0;
    for (unsigned int i = 0; i < length; ++i) {
        node_stu* temp = (node_stu*)malloc(sizeof(node_stu));
        temp->next = res;
        temp->value.no = array[i].no;
        temp->value.score = array[i].score;
        res = temp;
    }
    return res;
}