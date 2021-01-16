//
//  1373.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/15.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string n;
    cin>>n;
    
    reverse(n.begin(), n.end());
    
    int res[1000000];
    
    int k=0;
    for(int i=0;i<n.size();i++){
        int num = n[i]-'0';
        
        if(i%3==0) {
            res[i/3] = num*1;
            k++;
        }
        else if(i%3==1) res[i/3] += num*2;
        else res[i/3] += num*4;
 
    }
    
    
    while(k--){
        cout<<res[k];
    }
    
    
    return 0;
}
