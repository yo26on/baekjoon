//
//  1212.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/16.
//

#include <iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    
    int a[3]={0,};
    for(int i = 0 ; i<n.length() ; i++){
        int num = n[i]-'0';
        
        if(i==0&&num==0){
            cout<<0;
            continue;
        }
        
        int j=2;
        while(num){
            a[j--]=num%2;
            num=num/2;
        }
        
        int p=0;
        if(i==0){
            if (n[i]-'0'==0) p=3;
            else if(n[i]-'0'==1) p=2;
            else if(n[i]-'0'==2 || n[i]-'0'==3) p=1;
        }
        
        for(int k=p;k<3;k++){
            cout<<a[k];
            a[k]=0;
        }
        
    }
    
    
    return 0;
}
