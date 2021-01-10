//
//  10866.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/10.
//

#include <iostream>
#include <deque>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    deque<int> deq;
    
    while(t--){
        string func;
        cin>>func;
        
        if(func=="push_front"){
            int n;
            cin>>n;
            deq.push_front(n);
        }
        else if(func=="push_back"){
            int n;
            cin>>n;
            deq.push_back(n);
        }
        
        else if(func=="pop_front"){
            if(deq.empty()) cout<<-1<<endl;
            else {
                cout<<deq.front()<<endl;
                deq.pop_front();
            }
        }
        else if(func=="pop_back"){
            if(deq.empty()) cout<<-1<<endl;
            else {
                cout<<deq.back()<<endl;
                deq.pop_back();
            }
        }
        
        else if(func=="size"){cout<<deq.size()<<endl;}
        else if(func=="empty"){cout<<deq.empty()<<endl;}
        
        else if(func=="front"){
            if(deq.empty()) cout<<-1<<endl;
            else cout<<deq.front()<<endl;
        }
        else if(func=="back"){
            if(deq.empty()) cout<<-1<<endl;
            else cout<<deq.back()<<endl;
        }
        
       
    }
    
    return 0;
}

