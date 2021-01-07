//
//  10844.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/02.
//

#include <stdio.h>
#include <iostream>
#define max 1000000000
using namespace std;

int dp[101][101] ={0};

int solution(int n){
    for(int i = 1;i<=9 ; i++) dp[1][i] = 1;
    for(int i = 2;i<=n;i++){
        for(int j=0;j<=9;j++){
            if (j == 0) dp[i][j] = dp[i - 1][j + 1] % max;
            else if (j + 1 == 10) dp[i][j] = dp[i - 1][j - 1] % max;
            else dp[i][j] = (dp[i - 1][j - 1] % max + dp[i - 1][j + 1] % max) % max;
        }
    }
    int count=0;
    for(int i = 0 ; i<= 9 ; i++) count=(count+dp[n][i])%max;
    // 모듈러 연산의 성질을 이용해서 계산할 때마다 해준다.
    // (a+b) % c = (a%c+b%c)%c
    return count%max;
}

int main(){
    int t;
    cin>>t;
    cout<<solution(t)<<endl;
    return 0;
}
