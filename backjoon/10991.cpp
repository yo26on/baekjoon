//
//  10991.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/02.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i = 0 ; i < t ; i++){
        for(int k = 1 ; k < t-i ; k++) cout<<" ";
        for(int j = 0 ; j<=i ; j++) cout<<"* ";
        cout<<"\n";
    }
    
    return 0;
}
