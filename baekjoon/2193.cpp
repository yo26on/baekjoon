//
//  2193.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/02.
//

#include <iostream>
using namespace std;
long long dp[91] = {0};

long solution(int n){
    dp[1] = 1;
    dp[2] = 1;
    
    for(int i = 3; i<=n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    return dp[n];
}

int main(){
    int t;
    cin>>t;
    
    cout<<solution(t)<<endl;
    
    return 0;
}
