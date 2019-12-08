//
// Created by phoenix on 2019/11/4.
/*
 * Question : 一个数组A中存有N(N>0)个整数，在不允许使用另外数组的前提下，将每个整数循环向右移M(M>=0)个位置，即将A中的数据由(A0A1 ... An-1)
 *            变换为(AN-M...AN-1,A0,A1...AN-M-1)
 * Input Specification : 每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；第2行输入N个整数，之间用空格分隔。
 *
 * Output Specification : 在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。
 *
 * Input Sample : 6 2
 *                1 2 3 4 5 6
 *
 * Output Sample : 5 6 1 2 3 4
 */

#include "B1008.h"
#include <cstdio>
int main(){
    int a[110];
    int n,m,count = 0;
    scanf("%d %d",&n,&m);
    m = m % n;
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = n-m; i < n ; ++i) {
        printf("%d",a[i]);
        count++;
        if(count < n ) printf(" ");
    }

    for (int j = 0; j < n-m; ++j) {
        printf("%d",a[j]);
        count++;
        if(count < n )  printf(" ");
    }

}
