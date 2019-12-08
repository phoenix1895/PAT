//
// Created by phoenix on 2019/11/13.
//
#include <cstdio>
int change(char a){
    if(a == 'B') return 0;
    if(a == 'C') return 1;
    if(a == 'J') return 2;
}
int main(){
    int n;
    scanf("%d",&n);
    char mp[3] = {'B','C','J'};
    int times_A[3]={0},times_B[3]={0};
    int hand_A[3] = {0},hand_B[3] = {0};
    for(int i = 0;i<n;i++){
        char p1,p2;
        int k1,k2;
        getchar();
        scanf("%c %c",&p1,&p2);
        k1 = change(p1);
        k2 = change(p2);

        if((k1+1) %3== k2){
            times_A[0]++;
            times_B[2]++;
            hand_A[k1]++;
        }else if( k1 == k2){
            times_A[1]++;
            times_B[1]++;
        }else if((k2 +1) %3 ==k1){
            times_A[2]++;
            times_B[0]++;
            hand_B[k2]++;
        }
    }
    printf("%d %d %d\n",times_A[0],times_A[1],times_A[2]);
    printf("%d %d %d\n",times_B[0],times_B[1],times_B[2]);

    int count1 = 0,count2 = 0;
    for(int i = 0;i<3;i++){
        if(hand_A[i] > hand_A[count1]) count1 = i;
        if(hand_B[i] > hand_B[count2]) count2 = i;
    }
    printf("%c %c\n",mp[count1],mp[count2]);

}


