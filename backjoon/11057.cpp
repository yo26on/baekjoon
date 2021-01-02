//
//  11057.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/02.
//

#include <iostream>
using namespace std;

#define mod 10007
int dp[1001][1001];
int solution(int n){
    for(int i = 0 ; i < 10 ; i ++) dp[1][i] = 1;
    
    for(int k = 2 ; k <= n ; k++){
        for(int j = 0 ; j < 10 ; j ++){
            for(int p = j ; p < 10 ; p++){
                dp[k][j] = (dp[k][j]%mod+dp[k-1][p]%mod)%mod;
            }
        }
    }
    
    int count = 0;
    for(int i = 0 ; i<10 ; i++) count=(count%mod+dp[n][i]%mod)%mod;
    return count%mod;
}

int main(){
    int t;
    cin>>t;
    
    cout<<solution(t)<<endl;
    
    return 0;
}
