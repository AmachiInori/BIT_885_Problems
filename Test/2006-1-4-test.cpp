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

# include "../Problems/2006-1-4.c"
# include <vector>
# include "../Common/Lists.hpp"

std::ostream& operator<<(std::ostream& OS, student stu) {
    return OS << stu.sno << ',' << stu.cno << ',' << stu.score << '\n';
}

int main() {
    std::vector<student> test = {{1, 3, 15}, {2, 3, 25}, {3, 3, 18}, {4, 1, 48}};
    node_stu* res = sort_student(&*test.begin(), test.size());
    list_algo::print_list(res);
    return 0;
}