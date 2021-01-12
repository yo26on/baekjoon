//
//  1934.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/12.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int m=1;
    
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int n = min(a,b);
        
        for(int i = 1; i<=n ; i++){
            if(a%i==0 && b%i==0){
                m=i;
            }
        }
        cout<<a*b/m<<endl;
    }
    
    
    return 0;
}
