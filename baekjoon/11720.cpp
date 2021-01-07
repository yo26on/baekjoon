//
//  11720.cpp
//  backjoon
//
//  Created by 김윤서 on 2020/12/30.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    char* p = new char[t];
    cin>>p;
    
    int sum=0;
    
    for(int i = 0 ; i<t ; i++){
        sum+=p[i]-'0';
    }
    
    cout<<sum;
}
