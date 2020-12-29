//
//  10952.cpp
//  backjoon
//
//  Created by 김윤서 on 2020/12/29.
//

#include <iostream>
using namespace std;

int main(){
   
    int n1,n2;
    
    while(cin>>n1>>n2){
        if(n1==0&&n2==0) break;
        cout<<n1+n2<<endl;
    }
    return 0;
}

