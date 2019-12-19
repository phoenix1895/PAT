//
// Created by phoenix on 2019/11/18.
/*
 * Question : 读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
 *
 * Input Specification : 每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100。
 *
 * Out Specification : 在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
 *
 * Input Sample :1234567890987654321123456789
 *
 * Out Sample : yi san wu
 */
#include <cstdio>
#include <cstring>
int main(){
    char str[110];
    scanf("%s",str);
    int len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; ++i) {
        count += str[i] -'0';
    }
//    printf("%d",count);
    int ans[10],num = 0;
    while(count != 0){//将count倒序存入ans数组
        ans[num++] = count %10;
        count = count/10;

    }
    char str2 [10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    for (int i = num - 1; i >=0 ; i--) {
            printf("%s",str2[ans[i]]);
            if(i != 0) printf(" ");
//            else printf("\n");
    }
}

