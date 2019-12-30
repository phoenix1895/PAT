// Created by phoenix on 2019/12/30.
/*
 * Question : To store English words, one method is to use linked lists and store a word letter by letter.
 * To save some space, we may let the words share the same sublist if they share the same suffix.
 * For example, loading and being are stored as showed in Figure 1.
 *
 * You are supposed to find the starting position of the common suffix.
 *
 * Input Specification:Each input file contains one test case. For each case, the first line contains two addresses of nodes and a positive N (≤10^5),
 * where the two addresses are the addresses of the first nodes of the two words, and N is the total number of nodes.
 * The address of a node is a 5-digit positive integer, and NULL is represented by −1.Then N lines follow, each describes a node in the format:
 * Address Data Next
 * whereAddress is the position of the node, Data is the letter contained by this node which is an English letter chosen from { a-z, A-Z }, and Next is the position of the next node.
 *
 * Out Specification : For each case, simply output the 5-digit starting position of the common suffix. If the two words have no common suffix, output -1 instead.
 *
 * Input Sample :                   Output Sample:  67890
11111 22222 9
67890 i 00002
00010 a 12345
00003 g -1
12345 D 67890
00002 n 00003
22222 B 23456
11111 L 00001
23456 e 67890
00001 o 00010

 */

#include <cstdio>
const int maxn = 100010;
struct Node{
    char data;
    int next;
    bool flag;//判断结点是否在第一条链表中出现
}node[100010];
int main(){
    for(int i = 0; i < maxn; ++i) {//初始化flag
        node[i].flag = false;
    }
    int h1,h2,n;//h1,h2分别代表两条链表的首地址
    scanf("%d%d%d",&h1,&h2,&n);
    int address,next;
    char data;
    for(int i = 0;i< n;i++){//读取所有结点
        scanf("%d %c %d",&address,&data,&next);
        node[address].data = data;
        node[address].next = next;
//        scanf("%d %c %d",&address,&node[address].data,&node[address].next);
    }
    int p;
    for (p = h1; p != -1 ; p = node[p].next) {//遍历第一条链表，令所有结点的flag为true
        node[p].flag = true;
    }
    for (p = h2; p!= -1 ; p = node[p].next) {//遍历第二条链表，当遇到第一个flag为true的结点时，退出循环
        if(node[p].flag == true ) break;
    }
    if(p != -1){
        printf("%05d\n",p);//若找到了共用结点，则输出结点的索引(实际上就是数组的索引)
    }else{
        printf("-1\n");
    }
    return 0;


}


