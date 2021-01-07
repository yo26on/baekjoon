//
//  2225.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/07.
//

#include <iostream>
#include <cstdio>
using namespace std;

#define mod  1000000000

int main(){
    int N;
    int K;
    cin>>N;
    cin>>K;
    
    int dp[201][201]={0};
    for(int n=1;n<=N;n++){
        for(int k=1;k<=K;k++){
            if(n==1){
                dp[n][k]=k;
            }
            else if(k==1){
                dp[n][k]=1;
            }
            else dp[n][k]=(dp[n][k-1]%mod+dp[n-1][k]%mod)%mod;
        }
    }
    
    cout<<dp[N][K]%mod;
    return 0;
}
