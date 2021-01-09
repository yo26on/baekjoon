//
//  9012.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/10.
//

#include <iostream>
#include <vector>
using namespace std;

class Stack{
    vector<char> v;
    
public:
    void push(char a){v.push_back(a);}
    char pop(){
        if(!empty()){
        char num = v.back();
        v.pop_back();
            return num;
        }
        else return -1;
    }
    int size(){return (int)v.size();}
    int empty(){return v.empty();}
    char top(){
        if(empty()) return -1;
        else return v.back();
    }
    
};

int main(){
    int t;
    cin>>t;
    
    while(t--){
        Stack stack;
        string str;
        cin>>str;
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='('){
                stack.push(str[i]);
            }else{
                if(stack.top()=='(')
                    stack.pop();
                else stack.push(str[i]);
            }
        }
        
        if(stack.empty()) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    
    return 0;
}
