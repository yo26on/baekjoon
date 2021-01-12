//
//  2609.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/12.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    
    int n = min(a,b);
    int m=1;
    for(int i = 1; i<=n ; i++){
        if(a%i==0 && b%i==0){
            m=i;
        }
    }
    cout<<m<<endl;
    cout<<a*b/m;
    
    return 0;
}
