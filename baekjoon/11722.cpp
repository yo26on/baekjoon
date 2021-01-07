//
//  11722.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/03.
//

#include <iostream>
using namespace std;

int dp[1001]={0};
int arr[1001];

int solution(int n){
    dp[0] = 1;
    int smaller=0;
    int result = 0;
    for(int i = 0; i < n ; i++){
        for(int k = i ; k>=0 ; k--){
            if(arr[i]<arr[k]){
                if(smaller<dp[k])
                    smaller = dp[k];
            }
        }
        dp[i]=smaller+1;
        smaller=0;
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
