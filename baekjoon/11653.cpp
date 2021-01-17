//
//  11653.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/17.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
 
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    
    int k = n;
    
    while(n!=1){
        for(int i = 2; i<=k ; i++){
            if(n%i==0){
                cout<<i<<endl;
                n=n/i;
                break;
            }
        }
    }
    
    return 0;
}
