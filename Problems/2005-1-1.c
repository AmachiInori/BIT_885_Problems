/* 
 * Chinese Comment by GB2312
 * 
 * ��Ŀ����
 * �����������ͬ�������������ǵĺ���135���Ұ��մ�С�����˳�򣬺���һ������ǰ��һ��������������
 * ��д�������⼸������
 * 
 * ����
 * �����⡣�������ñ����������дһ�鼴�ɡ��������ֺ�С��ѡ������ѭ����
*/
#include <stdio.h>

int main() {
    for (unsigned int i = 1; i <= 135; i++)
        for (unsigned int j = 2; i * j <= 135; j++) 
            for (unsigned int k = 2; i * j * k <= 135; k++)
                for (unsigned int l = 2; i * j * k * l <= 135; l++) 
                    for (unsigned int m = 2; i * j * k * l * m <= 135; m++)
                        if (i + i * j + i * j * k + i * j * k * l + i * j * k * l * m == 135)
                            printf("%ud, %ud, %ud, %ud, %ud\n", i, i * j, i * j * k, i * j * k * l, i * j * k * l * m);
    return 0;
}