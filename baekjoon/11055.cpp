//
//  11055.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/03.
//

#include <iostream>
using namespace std;

int dp[1001]={0};
int arr[1001];

int solution(int n){
    int max_sum=0;
    int result = 0;
    
    for(int i = 0; i < n ; i++){
        for(int k = i ; k>=0 ; k--){
            if(arr[i]>arr[k]){
                if(max_sum<dp[k]){
                    max_sum = dp[k];
                }
            }
        }
        dp[i]=arr[i]+max_sum;
        max_sum=0;
        if(dp[i]>result)
            result=dp[i];
    }
    return result;
}

int main(){
    int t;
    cin>>t;
    
    for(int i = 0 ; i < t ; i++){
        cin>>arr[i];
    }
    
    cout<<solution(t);
}

