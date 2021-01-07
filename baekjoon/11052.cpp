//
//  11052.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/07.
//

#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 1000+1

int main(){
    int t;
    cin>>t;
    
    int dp[MAX]={0};
    int arr[MAX]={0};
    
    for(int i=1;i<=t;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<=t;i++){
        for(int k=1;k<=i;k++){
            dp[i] = max(arr[k]+dp[i-k],dp[i]);
        }
    }
    
    cout<<dp[t];
    
    return 0;
}
