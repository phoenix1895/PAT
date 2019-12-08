//
// Created by phoenix on 2019/12/2.
/*
 * Question :令 Pi表示第 i 个素数。现任给两个正整数 M≤N≤10^4，请输出 PM 到 PN的所有素数。
 *
 * Input Specification : 输入在一行中给出 M 和 N，其间以空格分隔。
 *
 * Output Specification :输出从 PM 到 PN 的所有素数，每 10 个数字占 1 行，其间以空格分隔，但行末不得有多余空格。
 *
 * Input Sample : 5 27
 *
 * Output Sample:
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
 */
#include <cstdio>
#include <cmath>
const int maxn = 1000010;
int prime[maxn],count = 0;
bool p[maxn] = {0};
bool isprime(int n ){
    if(n <= 1) return false;
    int sqr = sqrt(n);
    for (int i = 2; i <=sqr ; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

void Find_prime(int n ){
    for (int i = 1; i < maxn; ++i) {
        if(isprime(i) == true){
            prime[count++] = i;
            if(count >= n) break;
            p[i] = true;
        }
    }
}

int main(){

    int m,n,sum = 0;
    scanf("%d %d",&m,&n);
    Find_prime(n);
    for (int i = m ; i <=n; i++) {
        printf("%d ",prime[i-1]);
        sum++;
        if(sum % 10 != 0 && i<n) printf(" ");
        else printf("\n");

    }

}






