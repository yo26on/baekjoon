//
//  10828.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/10.
//

#include <iostream>
#include <vector>
using namespace std;

class Stack{
    vector<int> v;
    
public:
    void push(int a){v.push_back(a);}
    int pop(){
        if(!empty()){
        int num = v.back();
        v.pop_back();
            return num;
        }
        else return -1;
    }
    int size(){return (int)v.size();}
    int empty(){return v.empty();}
    int top(){
        if(empty()) return -1;
        else return v.back();
    }
    
};

int main(){
    int t;
    cin>>t;
    
    Stack stack;
    
    while(t--){
        string func;
        cin>>func;
        if(func=="push"){
            int n;
            cin>>n;
            stack.push(n);
        }
        else if(func=="pop"){ cout<<stack.pop()<<endl;}
        else if(func=="size"){ cout<<stack.size()<<endl;}
        else if(func=="empty"){ cout<<stack.empty()<<endl;}
        else if(func=="top"){ cout<<stack.top()<<endl;}
    }
    
    return 0;
}
