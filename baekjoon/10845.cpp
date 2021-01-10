//
//  10845.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/10.
//

#include <iostream>
#include <queue>
using namespace std;


int main(){
    int t;
    cin>>t;
    
   queue<int> que;
    
    while(t--){
        string func;
        cin>>func;
        if(func=="push"){
            int n;
            cin>>n;
            que.push(n);
        }
        else if(func=="pop"){
            if(que.empty()) cout<<-1<<endl;
            else {
                cout<<que.front()<<endl;
                que.pop();
            }
        }
        else if(func=="size"){
            if(que.empty()) cout<<0<<endl;
            else cout<<que.size()<<endl;
        }
        else if(func=="empty"){cout<<que.empty()<<endl;}
        else if(func=="front"){
            if(que.empty()) cout<<-1<<endl;
            else cout<<que.front()<<endl;
        }
        else if(func=="back"){
            if(que.empty()) cout<<-1<<endl;
            else cout<<que.back()<<endl;
        }
    }
    
    return 0;
}
