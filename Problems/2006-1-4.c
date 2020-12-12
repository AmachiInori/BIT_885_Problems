/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ��һ������ѧ���γ̳ɼ��Ľṹ���飬����ѧ����ѧ�š��γ̱�źͿγ̳ɼ���
 * ���дһ���������������ڽṹ�����е������Ȱ��տγ̱�Ŵ�С�����ٰ��տγ̳ɼ��Ӹߵ��͵�˳������һ�����������С�
 * �ṹ�嶨������ 
 *  struct student {
 *      int sno; // ѧ�����
 *      int cno; // �γ̱��
 *      float score;
 *  };
 * 
 * ����
 * ��2005-1-4�������ƣ�ֻ����Ҫ���±�дһ��
 * 
 * Ҫ��
 * - �����ͷ�巨����
 * - malloc����
 * - ��������qsort�Ŀ����������
 * - ����ָ�롢voidָ�뼰ָ������ת��
 * 
 * ����֪ʶ
 * qsort�����бȽϺ����ķ���ֵ
 *  int compare(const void* a, const void* b)�У�
 *  ������ֵΪ����������a�ᱻ����b֮ǰ
 *  ������ֵΪ����������a�ᱻ����b֮��
 *  ������ֵ��0����a��b������ǰ��
*/

# include <stdlib.h> // Ϊ��ʹ��qsort��malloc

struct student {
    int sno; // ѧ�����
    int cno; // �γ̱��
    float score;
};

struct node_stu {
    student value;
    node_stu* next;
};

int compare_stu(const void* a, const void* b) { // ���ǵ�����Ŀscore��float���ʲ������׷��ز�ֵ�� // ��������
    if (((student*)a)->cno == ((student*)b)->cno) // ע��۲�����
        return ((student*)a)->score > ((student*)b)->score ? 1 : -1;
    else return -((student*)a)->cno + ((student*)b)->cno;
}

node_stu* sort_student(student* array, unsigned int length) {
    if (!length) return 0;
    qsort(array, length, sizeof(student), compare_stu);
    node_stu* res = 0;
    for (unsigned int i = 0; i < length; ++i) {
        node_stu* temp = (node_stu*)malloc(sizeof(node_stu));
        temp->next = res;
        temp->value.sno = array[i].sno;
        temp->value.cno = array[i].cno;
        temp->value.score = array[i].score;
        res = temp;
    }
    return res;
}