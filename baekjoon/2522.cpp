//
//  2522.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/01.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int j=0;j<t;j++){
        for(int i = 0;i<(t-j-1);i++){
            cout<<" ";
        }
        for(int i = 0;i <= j;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int j = 1; j<t ; j++){
        for(int i = 1;i<=j;i++){
            cout<<" ";
        }
        for(int i = 0;i < t-j;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
