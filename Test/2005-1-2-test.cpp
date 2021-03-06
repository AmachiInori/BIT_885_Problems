/* 
 * Chinese Comment by UTF-8
 * 
 * 题目内容
 * 编写函数，实现将存放在变量n中的整数，逆序存放在变量m中。
 * 例如原来变量n保存的是483，程序运行后变量m中存放整数384
 * 
 * 分析
 * 用简单的逐位提取即可，难度较低。
 * 可以使用数组存放各位，但没必要，这么做既低效，又会暴露出编程者较低的算法水平。
 * 最简洁明快而优雅的写法呈现在下方：
 * 
 * 要点
 * - 循环
*/

# include "../Problems/2005-1-2.c"
# include <iostream>

int main() {
    int test = -23456;
    std::cout << reverse_int(test);
    return 0;
}