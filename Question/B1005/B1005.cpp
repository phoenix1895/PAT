//
// Created by phoenix on 2019/11/27.
/*
 * Question :卡拉兹(Callatz)猜想已经在1001中给出了描述。在这个题目里，情况稍微有些复杂。当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。
 * 例如对 n=3 进行验证的时候，我们需要计算 3、5、8、4、2、1，则当我们对 n=5、8、4、2 进行验证的时候，就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，
 * 因为这 4 个数已经在验证3的时候遇到过了，我们称 5、8、4、2 是被 3“覆盖”的数。我们称一个数列中的某个数 n 为“关键数”，如果 n 不能被数列中的其他数字所覆盖。
 * 现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字，并按从大到小的顺序输出它们。
 *
 * Input Specification :每个测试输入包含 1 个测试用例，第 1 行给出一个正整数 K (<100)，第 2 行给出 K 个互不相同的待验证的正整数 n (1<n≤100)的值，数字间用空格隔开。
 *
 * Output Specification :每个测试用例的输出占一行，按从大到小的顺序输出关键数字。数字间用 1 个空格隔开，但一行中最后一个数字后没有空格。
 *
 * Input Sample :                   Output Sample :
    6                                   7 6
3 5 6 7 8 11
 */
#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
    return a > b;
}
int main(){
    bool hashTable[10000] = {0};
    int nums[110];
    int k;
    scanf("%d",&k);
    for (int i = 0; i < k; ++i) {
        scanf("%d",&nums[i]);
        int m = nums[i];
        while(m!=1){
            if(m %2 ==0) m = m/2;
            else m = (3*m+1)/2;
            hashTable[m] = true;
        }
    }
    int count =0;
    for (int i = 0; i < k; ++i) {
        if(!hashTable[nums[i]])
            count++;
    }

    sort(nums,nums+k,cmp);
    for (int i = 0; i< k; ++i) {
        if(!hashTable[nums[i]]){
            printf("%d",nums[i]);
            count --;
            if(k-1 > 0) printf(" ");
        }

    }



}

