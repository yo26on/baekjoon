//
//  1978.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/17.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    bool isPrime = true;
    int count = 0;
    
    while(n--){
        int num;
        cin>>num;
        
        if(num==1) isPrime = false;
        else if(num==2||num==3) isPrime = true;
        else if(num%2==0) isPrime = false;
        else{
            for(int i=3;i<num;i++){
                if(num%i==0){
                    isPrime=false;
                    break;
                }
            }
        };
        
        if(isPrime)
            count++;
        isPrime = true;
    }
    
    cout<<count<<endl;
    return 0;
}
