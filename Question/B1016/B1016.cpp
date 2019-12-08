//
// Created by phoenix on 2019/11/3.
/*
 * Question : 正整数A的"DA(为1位整数)部分"定义为由A中所有DA组成的新整数PA。例如给定A = 3862767，则A的"6部分"PA是66，因为A中有2个6。
 *            现给定A、DA、B、DB，请编写程序计算PA+PB
 * Input Specification : 在一行中依次输入A、DA、B、DB，中间以空格分隔，其中0<A,B<10^10.
 * OutPut Specification : 一行中输出PA+PB的值。
 * Input sample： 3862767 6 13530293 3
 * Output sample : 399
 */

#include <cstdio>
#include "B1016.h"
int main(){
    long long a,da,b,db;
    long long pa = 0,pb = 0;
    scanf("%lld %lld %lld %lld",&a,&da,&b,&db);
    while(a != 0){
        if(a %10 == da)
            pa = pa*10+da;
            a = a/10;

    }
    while(b != 0){
        if(b %10 == db)
            pb = pb*10+db;
            b = b/10;

    }
    printf("%d",pa+pb);




}
