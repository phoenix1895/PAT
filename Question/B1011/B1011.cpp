//
// Created by phoenix on 2019/11/3.
/*
 * Question : 给定区间[-2^31,2^31]内的三个整数A、B、C，请判断A+B是否大于C
 * Input Specification : 第一行给出正整数T(<=10),即测试用例的个数。随后给出T组测试用例，每组用例占一行，顺序给出A、B、C。整数间空格分隔。
 * Output Specification : 对每组测试用例，如果A+B>C,在一行中输出"Case #X:true";否则输出"Case #X:false",其中X是测试用例的编号。
 */

#include "B1011.h"
#include <cstdio>
int main(){
//    int T = 5;
//    long long a,b,c;
//    scanf("%d",&T);
//    for(int i = 1;i<=T;i++){
//        scanf("%lld%lld%lld",&a,&b,&c);
//        printf("Case #%d:%s\n",i,(a+b>c?"true":"flase"));
//
//    }
    int T,tcase = 1;
    long long a,b,c;
    scanf("%d",&T);
    while (T--){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c) printf("Case #%d:true\n",tcase++);
        else printf("Case #%d:false\n",tcase++);
    }

    return 0;
}
