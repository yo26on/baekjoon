//
//  11054.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/05.
//

#include <iostream>
using namespace std;

int dp[1001]={0};
int bdp[1001]={0};
int arr[1001];

int solution(int n){
    bdp[0] = 1;
    int back=0;
    int result = 0;
    
    for(int i = n-1; i >= 0 ; i--){
        for(int k = n-1 ; k>i ; k--){
            if(arr[i]>arr[k]){
                if(back<bdp[k])
                    back = bdp[k];
            }
        }
        bdp[i]=back+1;
        back=0;

    }
    
    dp[0] = 1;
    int front=0;
   
    for(int i = 0; i < n ; i++){
        for(int k = 0 ; k < i ; k++){
            if(arr[i]>arr[k]){
                if(front < dp[k])
                    front = dp[k];
            }
        }
        dp[i]=front+1;
        front=0;
        
    }
    
    for(int i = 0 ; i<n ; i++){
        result=max(result,dp[i]+bdp[i]-1);
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
