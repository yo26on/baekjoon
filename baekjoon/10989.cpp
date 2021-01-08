//
//  10989.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/08.
//

#include <iostream>
using namespace std;

int num[10001] = {0,};
int main()
{
    int t;
    scanf("%d",&t);
    
    int max = 0;
    
    while(t--){
        int n;
        scanf("%d",&n);
        num[n]++;
        if(n>max) max=n;
    }
    
    for(int i=0; i<=max;i++){
        for(int k=0;k<num[i];k++)
            printf("%d\n",i);
    }
    
    return 0;
}
