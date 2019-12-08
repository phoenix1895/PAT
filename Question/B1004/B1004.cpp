//
// Created by phoenix on 2019/11/9.
/*
 * Question : 读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
 *
 * Input Specification : 每个测试输入包含 1 个测试用例，格式为
 * 第 1 行：正整数 n
 * 第 2 行：第 1 个学生的姓名 学号 成绩
 * 第 3 行：第 2 个学生的姓名 学号 成绩
 * ... ... ...
 * 第 n+1 行：第 n 个学生的姓名 学号 成绩
 *
 * 其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
 *
 * Output Specification :对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。
 *
 * Input Sample :                                   Output Sample : Mike CS991301
 *          3                                                      Joe Math990112
 Joe Math990112 89
 Mike CS991301 100
 Mary EE990830 95
 */

#include <cstdio>
#include <algorithm>
using  namespace std;
struct Student{
    char Name[15];
    char ID[15];
    int score;
}stu[110];
bool cmp(Student a,Student b){
    return a.score > b.score;
}
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i <n ; ++i) {
        scanf("%s%s%d",stu[i].Name,stu[i].ID,&stu[i].score);
    }
    sort(stu,stu+n,cmp);
    printf("%s %s\n",stu->Name,stu->ID);
    printf("%s %s",(stu+n-1)->Name,(stu+n-1)->ID);
}