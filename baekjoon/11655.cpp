//
//  11655.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/11.
//

#include <iostream>
using namespace std;

int main(){
    char str[100];
    
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        if('A'<=str[i]&&str[i]<='Z'){
            if(str[i]<='M') str[i]=str[i]+13;
            else str[i]=str[i]-13;
        }
        else if('a'<=str[i]&&str[i]<='z'){
            if(str[i]<='m') str[i]=str[i]+13;
            else str[i]=str[i]-13;
        }
        else continue;
    }
    
    cout<<str;
    return 0;
}
