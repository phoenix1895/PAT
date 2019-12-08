//
// Created by phoenix on 2019/10/26.
/*
 * Question : 给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。
 * 输入格式 : 测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。
 *           字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用 1 个空格分开，输入保证句子末尾没有多余的空格。
 * 输出格式 : 每个测试用例的输出占一行，输出倒序后的句子。
 * 输入样例 : Hello World Here I Come
 * 输出样例 : Come I Here World Hello
 */

#include "B1009.h"
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    char str[90];
//    scanf("%s",str);
    cin >> str;
    gets(str);
    int len = strlen(str), r = 0,h = 0;
    char ans [90][90];
    for (int i = 0; i < len; ++i) {
        if(str[i] != ' '){
            ans[r][h++] = str[i];
        } else{
            ans[r][h] = '\0';
            r++;
            h = 0;
        }
    }

    for (int j = r; j >= 0; j--) {//题目要求逆序输出这个字符串数组
        printf("%s",ans[j]);
        if(j>0) printf(" ");
    }
    return 0;


}