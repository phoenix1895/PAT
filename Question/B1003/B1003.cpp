//
// Created by phoenix on 2019/11/10.
/*
 * Question :“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。
 * 得到“答案正确”的条件是：
 *
 * 1.字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
 * 2.任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
 * 3.如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
 *
 * 现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的
 *
 * Input Specification :每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。
 *
 * Output Specification : 每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出 YES，否则输出 NO。
 *
 * Input Sample :                           Output Sample :
8
PAT                                                     YES
PAAT                                                    YES
AAPATAA                                                 YES
AAPAATAAAA                                              YES
xPATx                                                   NO
PT                                                      No
Whatever                                                NO
APAAATAA                                                NO
 *
 */
#include <cstdio>
#include <cstring>

int main(){
        int n;
        scanf("%d",&n);
    while(n --){
        char str[110];
        scanf("%s",str);
        int len = strlen(str);
        int num_p = 0,num_t = 0,others = 0;//分别对应P的个数，T的个数，其他字符的个数
        int loc_p = -1, loc_t = -1;//分别对应p的位置，t的位置
        for(int i =0;i<len;i++){
            if(str[i] == 'P'){
                num_p++;
                loc_p = i;
            }else if(str[i] == 'T'){
                num_t++;
                loc_t = i;
            }else if(str[i] != 'A'){
                others++;
            }
            
        }
        if(num_p != 1 || num_t != 1 || others != 0 || loc_t - loc_p <=1 ){
            printf("NO\n");
            continue;
        }
        int x = loc_p,y = loc_t - loc_p - 1,z = len - loc_t - 1;
        if(z - x*(y - 1) == x){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}

