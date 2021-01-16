//
//  2745.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/15.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string n;
    int b;
    
    cin>>n>>b;
    
    reverse(n.begin(), n.end());
    
    long long res = 0;
    
    
    for(int i = 0 ; n[i]!='\0' ; i++){
        int mul=1;
        for(int k = 0 ; k<i ; k++){
            mul*=b;
        }
        if(n[i]<='9')
            res+=(n[i]-'0')*mul;
        else
            res+=(n[i]+10-'A')*mul;
    }
    
    cout<<res;
    
    return 0;
}
