//
//  main.cpp
//  Codeup1934
//
//  Created by phoenix on 2019/10/22.
//  Copyright © 2019 phoenix. All rights reserved.
//

#include <iostream>
const int maxn = 210;
int arr [maxn];
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    int n,x ;
    scanf("%d",&n);

    for (int i = 0;i< n ; i++) {
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&x);
    int j;
    for (j = 0; j < n; j++) {
        if(arr[j] == x){
            printf("%d\n",j);
            break;
        }
            
    }
    if(j== n)
        printf("-1\n");
    return 0;
   
}
