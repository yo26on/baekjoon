//
//  11727.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/02.
//

#include <iostream>
using namespace std;

int solution(int n){
    int dp[10001];
    dp[1] = 1;
    dp[2] = 3;
    for(int i = 3; i<=n ; i++) dp[i] = (dp[i-1]+2*dp[i-2])%10007;
    //d-1은 하나를 두는 경우, d-2는 두개를 두는 경우
    
    return dp[n];
}

int main(){
    int t;
    cin>>t;
    
    cout<<solution(t);
    return 0;
}

