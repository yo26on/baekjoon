//
//  10799.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/10.
//

#include <iostream>
#include <stack>
using namespace std;

int main(){
    char str[100001];
    cin>>str;
    
    stack<char> stack;

    char preStr='\0';
    int cnt = 0;
    for(int i = 0 ; str[i]!='\0' ; i++){
        if(str[i]=='('){
            stack.push(str[i]);
        }
        else{
            if(preStr=='('){
                cnt+=stack.size()-1;
            }else{
                cnt++;
            }
            stack.pop();
        }
        preStr=str[i];
    }
    
    cout<<cnt;
    
    return 0;
}

