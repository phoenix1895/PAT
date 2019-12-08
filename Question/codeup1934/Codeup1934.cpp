//
// Created by phoenix on 2019/10/22.
//Question: 输入一个数n(1<=n<=200),然后输入n个数值各不相同的数，
// 再输入一个值x，输出这个值在这个数组中的下标，若不在数组中则输出 -1

#include "Codeup1934.h"
const int maxn = 210;
int arr [maxn];
int main(){
    int n,x;
        scanf("%d",&n);
        for (int i = 0; i < n; ++i) {
            scanf("%d",&arr[i]);
        }

    scanf("%d",&x);
    int j;
    for ( j = 0; j < n; ++j) {
        if(arr[j]==x){
            printf("%d",j);
            break;
        }
    }
    if(j==n) printf("-1\n");

    return 0;
}
