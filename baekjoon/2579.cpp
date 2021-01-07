//
//  2579.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/05.
//

#include <iostream>
#include <algorithm>

#define NUM 10000+1
using namespace std;

int dp[NUM]={0};
int arr[NUM]={0};

int solution(int n){
    
    dp[0]=arr[0];
    dp[1]=arr[0]+arr[1];
    dp[2]=max(arr[0]+arr[2],arr[1]+arr[2]);
    
    for(int i=3;i<n;i++){
        dp[i] = max(dp[i-2]+arr[i],dp[i-3]+arr[i-1]+arr[i]);
    }
    
    return dp[n-1];
}

int main(){
    int t;
    cin>>t;
    
    for(int i = 0;i<t;i++){
        cin>>arr[i];
    }
    cout<<solution(t);
}
