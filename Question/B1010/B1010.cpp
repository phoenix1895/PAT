//
// Created by phoenix on 2019/11/13.
/*
 * Question :设计函数求一元多项式的导数。x^n(n为整数)的一阶导数为nx^n-1
 *
 * Input Specification :以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过 1000 的整数）。数字间以空格分隔。
 *
 * Output Specification :以与输入相同的格式输出导数多项式非零项的系数和指数。数字间以空格分隔，但结尾不能有多余空格。
 * 注意“零多项式”的指数和系数都是 0，但是表示为 0 0。
 *
 * Input Sample : 3 4 -5 2 6 1 -2 0 多项式为 : 3x^4 - 5x^2 + 6x-2
 * Out Sample : 12 3 -10 1 6 0 多项式为: 12x^3 - 10x + 6
 */


#include "B1010.h"
#include <cstdio>
int main(){
     int a [1010];
     int k,e,count = 0;
//     while(scanf("%d %d",&k,&e) != EOF){
//         a[e] = k;
//     }
        scanf("%d %d",&k,&e);
        a[e] = k;
     for(int i =0;i <= 1000;i++){
         a[i -1] = a[i] *i;
         a[i] = 0;
         if(a[i - 1] != 0) count ++;

     }
     if(count == 0) printf("0 0");
     else {
         for(int i = 1000;i<=0;i--){
             if(a[i] != 0){
                 printf("%d %d",a[i],i);
                 count --;
                 if(count != 0) printf(" ");
             }
         }
     }

}