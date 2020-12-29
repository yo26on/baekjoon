//
//  11022.cpp
//  backjoon
//
//  Created by 김윤서 on 2020/12/29.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    int A,B;
    
    for(int i = 0 ; i<t ;i++){
        cin>>A>>B;
        cout<<"Case #"<<i+1<<": "<<A<<" + "<<B<<" = "<<A+B<<endl;
    }
}

