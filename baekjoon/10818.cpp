//
//  10818.cpp
//  backjoon
//
//  Created by 김윤서 on 2020/12/31.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    int max = -1000000;
    int min = 1000000;
    
    int input;
    
    while(t--){
        cin>>input;
        if(max<input) max=input;
        if(min>input) min=input;
    }
    
    cout<<min<<" "<<max;
    return 0;
}
