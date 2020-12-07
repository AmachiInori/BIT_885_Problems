/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * ��һ������ѧ���γ̳ɼ��Ľṹ���飬����ѧ���Ŀ��źͿγ̳ɼ���
 * ���дһ���������������ڽṹ�����е����ݰ��տγ̳ɼ��Ӹߵ��͵�˳������һ�����������С�
 * �ṹ�嶨������ 
 *  struct student {
 *      int no;
 *      float score;
 * };
 * 
 * ����
 * ��Ҫ��ϸߵ�һ���⡣
 * ���ص��룬����ʹ������Ĳ��������������һ���⡣�������뵽���������Ч��ƫ�ͣ�������֧�ֿ���������۰����򷨡�
 * �ʿ����ȶ�������д�С����������ٶ�����ִ��ͷ�巨�����õ��Ӵ�С������
 * ��ʵ��Ҫ��ϸߣ��������������ʹ�������������
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
# include "../Problems/2005-1-4.c"
# include <vector>
# include "../Common/Lists.hpp"

std::ostream& operator<<(std::ostream& OS, student stu) {
    return OS << stu.no << ',' << stu.score << '\n';
}

int main() {
    std::vector<student> test = {{1, 3}, {2, 25}, {3, 18}, {4, 48}};
    node_stu* res = sort_student(&*test.begin(), test.size());
    list_algo::print_list(res);
    return 0;
}