//
//  1168.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/12.
//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,k;
    cin>>n;
    cin>>k;
    
    queue<int> que;
    queue<int> result;
    
    for(int i=1;i<=n;i++){
        que.push(i);
    }
    
    int a = 1;
    int t = 1;
    
    cout<<"<";
    while(1){
        if(a==k){
            cout<<que.front();
            cout<<", ";
            que.pop();
            a=1;
            t++;
        }else{
            que.push(que.front());
            que.pop();
            a++;
        }
        
        if(t==n){
            cout<<que.front();
            break;
        }
    }
    cout<<">";
    

    return 0;
}

