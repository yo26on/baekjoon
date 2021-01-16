//
//  2089.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/16.
//

#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0) cout<<0;
    
    stack<int> s;
    while(n){
        if(n%-2==0){
            s.push(0);
            n=n/-2;
        }
    
        else{
            s.push(1);
            n=(n-1)/-2;
        }
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    
    
    return 0;
}
