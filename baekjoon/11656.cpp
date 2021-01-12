//
//  11656.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/12.
//

#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000+1

int main(){
    
    string str;
    cin>>str;
    
    string pre[MAX];

    int i;
    for(i=0;str[i]!='\0';i++){
        pre[i]=str.substr(i);
    }
    
   sort(pre,pre+i);
    
    for(int j=0;j<i;j++){
        cout<<pre[j]<<endl;
    }
    
    return 0;
}


