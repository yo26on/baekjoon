//
//  2441.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/01.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i = 0 ; i<t ; i++){
        for(int k = 0;k<i;k++){
            cout<<" ";
        }
        for(int k = 1; k<=t-i ; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
