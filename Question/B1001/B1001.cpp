//
// Created by phoenix on 2019/10/18.
/*Question : 输入一个数，若它是偶数，则将它砍掉一半。若它是奇数，那么把3n+1砍掉一半。
 * 这样一直反复砍下去，最后一定在某一步得到 n = 1。（卡拉兹猜想）编写一个program简单地数一下，经过多少步能得到 n = 1
 */
#include "B1001.h"
#include <cstdio>
#include <iostream>

int main(){
    int n,step = 0;
    scanf("%d",&n);
    while(n != 1){
        if(n%2 == 0) n = n/2;
        else n = (3*n+1)/2;
        step ++;
    }
    printf("%d",step);
    return 0;

}
