//
//  10808.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/10.
//

#include <iostream>
using namespace std;
int main(){
    char str[101];
    cin>>str;
    
    int ABC[26]={0,};
    for(int i=0;str[i]!='\0';i++){
        int n= str[i]-'a';
        ABC[n]++;
    }
    for(int i=0;i<26;i++){
        cout<<ABC[i]<<" ";
    }
    cout<<endl;
    return 0;
}
