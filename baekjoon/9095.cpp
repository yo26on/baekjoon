//
//  9095.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/02.
//

#include <iostream>
using namespace std;
int dp[12];

int solution(int n){
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4; i<=n ; i++) dp[i] = dp[i-3]+dp[i-2]+dp[i-1];
    
    return dp[n];
}

int main(){
    int t;
    cin>>t;
    
    int num;
    for(int i = 0 ; i < t ; i++){
        cin>>num;
        cout<<solution(num)<<endl;
    }
    return 0;
}

