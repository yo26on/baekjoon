//
//  8393.cpp
//  backjoon
//
//  Created by 김윤서 on 2020/12/31.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    int sum=t;
    while(--t){
        sum+=t;
    }
    
    cout<<sum;
    return 0;
}
