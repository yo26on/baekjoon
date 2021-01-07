//
//  11721.cpp
//  backjoon
//
//  Created by 김윤서 on 2020/12/30.
//

#include <iostream>
using namespace std;

int main(){
    char str[100];
    cin>>str;
    
    for(int i = 0; str[i]!='\0' ; i++){
        if(i!=0&&i%10==0) cout<<endl;
        cout<<str[i];
    }
}
