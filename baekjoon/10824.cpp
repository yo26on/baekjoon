//
//  10824.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/11.
//

#include <iostream>
using namespace std;

int main(){
   
    string num[4];
    for(int i=0;i<4;i++){
        cin>>num[i];
    }
    
    long long a = stoll(num[0]+num[1]);
    long long b = stoll(num[2]+num[3]);
    
    cout<<a+b<<endl;
    
    return 0;
}

