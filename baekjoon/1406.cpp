//
//  1406.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/12.
//

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<char> left;
    stack<char> right;
    
    string str;
    cin>>str;
    
    for(int i=0 ; str[i]!='\0' ; i++){
        left.push(str[i]);
    }
    
    int n;
    cin>>n;
    
    while(n--){
        char a;
        cin>>a;
        
        if(a=='L'&&!left.empty()){
            right.push(left.top());
            left.pop();
        }
        else if(a=='D'&&!right.empty()){
            left.push(right.top());
            right.pop();
        }
        else if(a=='B'&&!left.empty()){
            left.pop();
        }
        else if(a=='P'){
            char c;
            cin>>c;
            left.push(c);
        }
    }
    
    stack<char> print;
    while(!left.empty()){
        print.push(left.top());
        left.pop();
    }
    
    while(!print.empty()){
        cout<<print.top();
        print.pop();
    }
    while(!right.empty()){
        cout<<right.top();
        right.pop();
    }
    return 0;
}
