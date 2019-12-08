//
// Created by phoenix on 2019/11/18.
/*
 * B1014 Question : 大侦探福尔摩斯接到一张奇怪的字条：我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm。
 * 大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间星期四 14:04，因为前面两字符串中第 1 对相同的大写英文字母（大小写有区分）是第 4 个字母 D，代表星期四；
 * 第 2 对相同的字符是 E ，那是第 5 个英文字母，代表一天里的第 14 个钟头（于是一天的 0 点到 23 点由数字 0 到 9、以及大写字母 A 到 N 表示）；
 * 后面两字符串第 1 对相同的英文字母 s 出现在第 4 个位置（从 0 开始计数）上，代表第 4 分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。
 *
 * Input Specification : 输入在 4 行中分别给出 4 个非空、不包含空格、且长度不超过 60 的字符串。
 *
 * Output Specification :在一行中输出约会的时间，格式为 DAY HH:MM，其中 DAY 是某星期的 3 字符缩写，即 MON 表示星期一，TUE 表示星期二，WED 表示星期三，
 * THU 表示星期四，FRI 表示星期五，SAT 表示星期六，SUN 表示星期日。题目输入保证每个测试存在唯一解。
 *
 * Input Sample :                   Output Sample :
 * 3485djDkxh4hhGE                  THU 14:04
 * 2984akDfkkkkggEdsb
 * s&hgsfdk
 * d&Hyscvnm
 *
 * Annotation : 第一对字符串中第一个相同的大写字母代表星期，继第一个相同的大写字母之后的相同字符代表钟头。第二对字符串第一个相同的小写字母在字符串中的索引代表分钟。
 */
#include <cstdio>
#include <cstring>
int main(){
    char week [7][5] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    char str1[70],str2[70],str3[70],str4[70];
//    gets(str1);
//    gets(str2);
//    gets(str3);
//    gets(str4);
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    scanf("%s",str4);
    int len1 = strlen(str1),len2 = strlen(str2),len3 = strlen(str3),len4 = strlen(str4);
    int i;
    for( i =0;i<len1 &&i<len2;i++){
        if(str1[i] == str2[i] && str1[i] >= 'A' &&str1[i]<='G'){
            printf("%s ",week[str1[i] - 'A']);
            break;
        }
    }

    for(i++;i<len1 && i<len2;i++){
        if(str1[i] == str2[i] &&str1[i]>='0'&& str1[i]<='9'){
            printf("%02d:",str1[i] - '0');
        }
        else if(str1[i] == str2[i] &&str1[i] >= 'A' && str1[i] <= 'N' ){
            printf("%02d:",str1[i] - 'A'+10);
        }

    }

    for(int j = 0;j<len3 && j<len4;j++){
        if(str3[j] == str4[j]){
            if((str3[j] >= 'A' && str3[j] <='Z') || (str3[j]>='a' && str4[j]<='z')){
                printf("%02d",j);
                break;
            }
        }
    }



}

