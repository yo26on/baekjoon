//
//  10872.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/17.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int res=1;
    while(n>1){res*=(n--);}
    
    cout<<res;
    return 0;
}
