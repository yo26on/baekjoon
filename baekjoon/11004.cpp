//
//  11004.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/10.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,K;
    cin>>N>>K;
    
    int num[N];
    for(int i = 0 ; i < N ; i++){
        cin>>num[i];
    }
    
    sort(num,num+N);

    cout<<num[K-1];
    
    return 0;
}
