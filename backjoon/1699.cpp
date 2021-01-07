//
//  1699.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/05.
//

#include <iostream>
#include <cstdio>
using namespace std;
int Min(int a, int b){ return a < b ? a : b; }

int main(){
    
    int t;
    cin>>t;

    int dp[100001]={0};

    for(int i = 1; i<=t ; i++){
        dp[i] = i;
        for(int k = 2 ; k*k <= i ; k++){
            dp[i]=Min(dp[i], dp[i-k*k]+1);
        }
    }
    cout<<dp[t];

    
    return 0;
}
