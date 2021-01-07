//
//  2446.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/02.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i = 0 ; i<t ; i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int k = 0 ; k<2*(t-i)-1 ;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    for(int i = 1; i<t ; i++){
        for(int k=0;k<t-i-1;k++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
