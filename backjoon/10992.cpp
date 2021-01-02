//
//  10992.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/02.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i = 0 ; i < t-1 ; i++){
        for(int k = 0 ; k<t-i-1 ; k++) cout<<" ";
        cout<<"*";
        
        for(int k = 0 ; k < 2*i-1 ; k++) cout<<" ";
        if(i!=0)cout<<"*";
        
        cout<<"\n";
    }
    
    for(int k = 0 ; k < 2*t-1 ; k++) cout<<"*";
    
    return 0;
}
