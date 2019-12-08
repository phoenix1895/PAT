//
// Created by phoenix on 2019/12/2.
/*
 * Question :让我们定义dn为：dn=pn+1−pn，其中pi是第i个素数。显然有d1=1，且对于n>1有dn是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
 现给定任意正整数N(<10^5)，请计算不超过N的满足猜想的素数对的个数。

 Input Specification : 输入在一行给出正整数N。

 Output Specification :在一行中输出不超过N的满足猜想的素数对的个数。

 Input Sample : 20
 Output Sample: 4
 */
#include <cstdio>
#include <cmath>

bool isPrime(int n){
    if(n <= 1) return false;
    int sqr = sqrt(n);
    for (int i = 2; i <=sqr ; ++i) {
        if(n % i ==0) return false;
    }
    return true;
}
int main(){
   int n,count = 0;
   scanf("%d",&n);
    for (int i = 3; i+2 <=n ; i+=2) {
        if(isPrime(i) == true && isPrime( i+2 ) == true)
            count++;
    }
    printf("%d",count);
}

