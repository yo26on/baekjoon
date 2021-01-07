//
//  9461.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/07.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long dp[101] = {0};
        dp[1]=1;
        dp[2]=1;
        dp[3]=1;
        dp[4]=2;
        
        int n;
        cin>>n;
        
        for(int i = 5; i <= n ; i++){
            dp[i]=dp[i-5]+dp[i-1];
        }
        
        cout<<dp[n]<<"\n";
        
    }
    return 0;
}
