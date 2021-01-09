//
//  11652.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/10.
//

#include <iostream>
#include <algorithm>
using namespace std;

long long num[1000001];
int main()
{
    int t;
    scanf("%d",&t);

    for(int i = 0 ; i < t ; i++){
        scanf("%lld",&num[i]);
    }
    
    sort(num,num+t);
    
    int count=1;
    long long card = num[0];
    int max = 1;
    
    for(int i = 1 ; i < t ; i++){
        if(num[i-1]==num[i]){
            count++;
        }
        else{
            count=1;
        }
        if(count>max){
            max=count;
            card=num[i];
        }
    }
    
    printf("%lld",card);
    return 0;
}
