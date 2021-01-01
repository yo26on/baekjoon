//
//  2438.cpp
//  backjoon
//
//  Created by 김윤서 on 2020/12/31.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int j=0;j<t;j++){
        for(int i=0;i<=j;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
