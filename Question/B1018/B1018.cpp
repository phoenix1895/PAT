//
// Created by phoenix on 2019/11/12.
/*
 * Question :现给出两人石头剪刀布的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。
 *
 * Input Specification :输入第 1 行给出正整数 N(<= 10^5)即双方交锋的次数。随后 N 行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。
 * C 代表“锤子”、J 代表“剪刀”、B 代表“布”，第 1 个字母代表甲方，第 2 个代表乙方，中间有 1 个空格。
 *
 * Output Specification : 输出第 1、2 行分别给出甲、乙的胜、平、负次数，数字间以 1 个空格分隔。
 * 第 3 行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有 1 个空格。如果解不唯一，则输出按字母序最小的解。
 *
 * Input Sample :                               Out Sample :
 10                                             5 3 2
C J                                             2 3 5
J B                                             B B
C B
B B
B C
C C
C B
J B
B C
J J
 */
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n,p1win = 0;
    int p1wl[3] = {0},p2wl [3] = {0};//wl[0] 胜 wl[1] 负  wl[2] 平
    int count1[3],count2[3];
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        char p1, p2;
        scanf(" %c %c",&p1,&p2);
        if(p1 == 'C' && p2 == 'J' ){//甲胜
            p1wl[0] ++;
            p2wl[1] ++;
            count1[0] ++;
        }else if(p1 == 'C' && p2 == 'B'){//乙胜
            p1wl[1] ++;
            p2wl[0] ++;
            count2[0]++;
        }else if(p1 == 'C' && p2 =='C'){//平
            p1wl[2] ++;
            p2wl[2] ++;
        }else if(p1 == 'J' && p2 == 'B'){//甲胜
            p1wl[0] ++;
            p2wl[1] ++;
            count1[1] ++;
        } else if(p1 =='J' && p2 =='C'){//乙胜
            p1wl[1] ++;
            p2wl[0] ++;
            count1[0]++;

        } else if(p1 == 'J' && p2 == 'J'){//平
            p1wl[2] ++;
            p2wl[2] ++;
        } else if(p1 =='B' && p2 =='C'){//甲胜
            p1wl[0] ++;
            p2wl[1] ++;
            count1[2]++;
            p1win++;
        } else if(p1 == 'B' && p2 =='J' ){//乙胜
            p1wl[1] ++;
            p2wl[0] ++;
            count2[2]++;
        } else if(p1 == 'B' && p2 == 'B'){//平
            p1wl[2] ++;
            p2wl[2]++;
        }


    }
    printf("%d %d %d\n",p1wl[0],p1wl[2],p1wl[1]);
    printf("%d %d %d\n",p2wl[0],p2wl[2],p2wl[1]);


        if(count1[0] > count1[1] &&count1[0] > count1[2]) printf("C ");
        else if(count1[1] > count1[0] && count1[1] >count1[2] ) printf("J ");
        else if(count1[2] >= count1[0] && count1[2] >= count1[1]) printf("B ");
        else if(count1[2] == count1[0] || count1[2] ==count1[1] ) printf("B ");
        else if(count1[0] == count1[1]) printf("C ");

    if(count2[0] > count2[1] &&count2[0] > count2[2]) printf("C ");
    else if(count2[1] > count2[0] && count2[1] >count2[2] ) printf("J ");
    else if(count2[2] >= count2[0] && count2[2] >= count2[1]) printf("B ");
    else if(count2[2] == count2[0] || count2[2] ==count2[1] ) printf("B ");
    else if(count2[0] == count2[1]) printf("C ");


}

