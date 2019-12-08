//
// Created by phoenix on 2019/11/7.
/*
 * Question :让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），换个格式来输出任一个不超过 3 位的正整数。
 * 例如 234 应该被输出为 BBSSS1234，因为它有 2 个“百”、3 个“十”、以及个位的 4。
 *
 * Input Specification :每个测试输入包含 1 个测试用例，给出正整数 n（<1000）。
 *
 * Output Specification : 每个测试用例的输出占一行，用规定的格式输出 n。
 *
 * Input Sample : 234
 *
 * Output Sample : BBSSS1234
 */
#include <cstdio>
int main(){
    int n,i = 0;
    scanf("%d",&n);
    int nums[3]={0};
    while( n != 0){
        nums[i++] = n%10;
        n = n/10;
    }
    for (int j = 0; j <nums[2] ; ++j) {
        printf("B");
    }
    for (int k = 0; k < nums[i]; ++k) {
        printf("S");
    }
    for (int i = 1; i <= nums[0]; ++i) {
        printf("%d",i);
    }
}

