//
//  11005.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/15.
//

#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n,b;
    cin>>n>>b;

    stack<char> s;
    while(n){
        if(n%b<=9)
            s.push('0'+n%b);
        else if(n%b >= 10 && n%b <= 35)
            s.push('A'-10+n%b);
        n=n/b;
    }
    
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}
