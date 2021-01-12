//
//  1158.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/12.
//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    
    queue<int> que;
    queue<int> result;
    
    for(int i=1;i<=n;i++){
        que.push(i);
    }
    
    int a = 1;
    while(result.size()!=n){
        if(a==k){
            result.push(que.front());
            que.pop();
            a=1;
        }else{
            que.push(que.front());
            que.pop();
            a++;
        }
    }
    
    cout<<"<";
    for(int i=1;i<=n;i++){
        cout<<result.front();
        result.pop();
        
        if(i!=n) cout<<", ";
    }
    cout<<">";
    return 0;
}
