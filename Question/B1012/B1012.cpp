//
// Created by phoenix on 2019/11/11.
/*
 * Question :   给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：
 *              1.A1 = 能被5整除的数字中所有偶数的和
 *              2.A2 = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...
 *              3.A3 = 被 5 除后余 2 的数字的个数；
 *              4.A4 = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
 *              5.A5 = 被 5 除后余 4 的数字中最大数字。
 *
 * Input Specification :每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。
 *
 * Output Specification : 对给定的 N 个正整数，按题目要求计算 A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
 * 若其中某一类数字不存在，则在相应位置输出 N。
 *
 * Input Sample1:13    1 2 3 4 5 6 7 8 9 10 20 16 18            Output Sample1 :30 11 2 9.7 9
 * Input Sample2:8     1 2 4 5 6 7 9 16                           Output Sample2 :N 11 2 N 9
 */

#include <cstdio>
int main(){
    int nums[1010],ans[5] = {0},count[5]= {0};
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&nums[i]);

        if(nums[i] %5 ==0 ){//A1
            if(nums[i] %2 ==0){
                ans[0] += nums[i];
            }
        }

        else if(nums[i] %5 ==1 ){//A2
            if(count[1] %2 == 0){
                 ans[1] += nums[i];
            }else{
                ans[1] -= nums[i];
            }
            count[1] ++;

        }
        else if(nums[i] %5 == 2){//A3
            ans[2] ++;
        }
        else if(nums[i] %5 ==3){//A4
            ans[3] += nums[i];
            count[3]++;


        }
        else if(nums[i] %5 ==4){
            if(nums[i] > ans[4]) ans[4] = nums[i];
        }
    }
    if(ans[0] != 0) printf("%d ",ans[0]);
    else printf("N ");

    if(ans[1] != 0) printf("%d ",ans[1]);
    else printf("N ");

    if(ans[2] != 0) printf("%d ",ans[2]);
    else printf("N ");

    if(ans[3] != 0) printf("%.1f ",(double)ans[3]/count[3]);
    else printf("N ");

    if(ans[4] != 0) printf("%d",ans[4]);
    else printf("N");






}

