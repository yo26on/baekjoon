//
//  1912.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/05.
//

#include <iostream>
using namespace std;
int dp[100001] = {0};
int arr[100001] ={0};

int solution(int n){
    dp[0]=arr[0];
    int result = dp[0] ;
    
    for(int i = 1 ; i<n ; i++){
        dp[i] = max(arr[i],dp[i-1]+arr[i]);
        result = max(result,dp[i]);
    }
    
    return result;
}

int main(){
    int t;
    cin>>t;
    
    for(int i = 0 ; i < t ; i++){
        cin>>arr[i];
    }
    cout<< solution(t);
    return 0;
}
