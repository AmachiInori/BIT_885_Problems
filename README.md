# 关于库

本库是北京理工大学考研科目：“软件工程专业基础综合(885)”的初试中所有需要写代码的编程题以及解答汇总。

所有的参考答案都使用**标准C语言语法**编写(至少对C++的封装使它看上去就是C)，存放在目录`Problems`中，注释使用GB2312编码。基于考试的要求和实际情况(如：在考试卷面上不可能写特别长的程序)等，作了一些简化，**不代表真实编程水平**。

文件的命名规范是：`年份-部分-题目号`，其中：`部分`取值为`1, 2`，`1`代表C语言部分，`2`代表数据结构部分，题目号只取真题中本题目的`小题号`。

`Problems`中是试题及参考答案，某些参考答案没有`main`入口，不可以直接编译运行。

`Common`目录中是测试程序的依赖库，内含包括`按BFS序列生成一颗二叉树`等功能，使用C++11编写，如无C++基础可以无视。

`Test`目录是测试文件，不体现代码逻辑且用C++11编写，但是可以编译运行。可以无视。

如需将`Problems`中的代码单独运行的话，可能需要根据提示修改某些代码。

祝各位武运昌隆。

## 著作权声明

所有试题内容的著作权属北京理工大学计算机学院。

代码内容的著作权属作者，代码以MIT协议开源。