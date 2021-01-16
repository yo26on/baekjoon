//
//  11576.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/16.
//

#include <iostream>
#include <stack>
using namespace std;

int main(){
    int A,B;
    cin>>A>>B;
    
    int m;
    cin>>m;
    
    stack<int> s;
    while(m--){
        int n;
        cin>>n;
        s.push(n);
    }
    
    //A진법을 10진법으로
    int num = 0;
    int len = (int)s.size();
    for(int i=0;i<len;i++){
        int mul=1;
        for(int k = 0 ; k<i ; k++){
            mul*=A;
        }
        num+=mul*s.top();
        s.pop();
    }
    
    //10진법을 B진법으로
    while(num){
        s.push(num%B);
        num=num/B;
    }
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}
