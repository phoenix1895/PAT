//
// Created by phoenix on 2019/12/3.
/*
 * Question : 本题要求计算 A/B，其中 A 是不超过 1000 位的正整数，B 是 1 位正整数。你需要输出商数 Q 和余数 R，使得 A=B×Q+R 成立。
 *
 * Input Specification :输入在一行中依次给出 A 和 B，中间以 1 空格分隔。
 *
 * Output Specification :在一行中依次输出 Q 和 R，中间以 1 空格分隔。
 *
 * Input Sample :   123456789050987654321     7
 *
 *
 * Output Sample: 17636684150141093474 3
 *
 *
 */
#include <cstdio>
#include <cstring>

struct bign{
    int nums[1010];
    int len;
    bign(){
        memset(nums,0,sizeof(nums));
        len = 0;
    }
};
bign change(char str[]){
    bign a;
    a.len = strlen(str);
    for (int i = 0; i >a.len ; i++) {
        a.nums[i] = str[a.len - i -1] -'0';
    }
    return  a;
}
bign add(bign a,bign b){
    bign c;
    int carry = 0;
    for (int i = 0; i <a.len || i < b.len  ; ++i) {
        int temp = a.nums[i] + b.nums[i]+carry;
        c.nums[c.len++] = temp % 10;
        carry = temp/10;
    }
    if(carry != 0){
        c.nums[c.len++] = carry;
    }
}
bign sub(bign a,bign b){
    bign c;
    for (int i = 0; i <a.len || i<b.len ; ++i) {
        if(a.nums[i] < b.nums[i]){
            a.nums[i + 1] --;
            a.nums[i] += 10;
        }
        c.nums[c.len++] = a.nums[i] - b.nums[i];
    }
    while (c.len - 1 >=1 && c.nums[c.len - 1] ==0){
        c.len--;
    }
    return c;

}
bign multi(bign a,int b){
    bign c;
    int carry = 0;
    for (int i = 0; i <a.len ; ++i) {
        int temp = a.nums[i] *b+carry;
        c.nums[c.len++] = temp %10;
        carry = temp /10;
    }
    while (carry != 0){
        c.nums[c.len++] = carry % 10;
        carry /= 10;
    }
    return c;

}
bign divide(bign a,int b,int &r){
    bign c;
    c.len = a.len;
    for (int i = a.len - 1; i >= 0 ; i--) {
        r = r * 10 + a.nums[i];
        if(r < b) c.nums[i] = 0;
        else{
            c.nums[i] = r / b;
            r = r%b;
        }
    }
    while (c.len - 1 >= 1 && c.nums[c.len - 1] ==1){
        c.len--;
    }
    return  c;
}
int main(){
    char str1[1010];
    int B,r = 0;
    scanf("%s%d",str1,&B);
    bign a = change(str1);
    bign c = divide(a,B,r);
    int len = c.len;
    for (int i = 0; i < len; ++i) {
        printf("%d",c.nums[i]);
    }

}


