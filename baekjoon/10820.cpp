//
//  10820.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/10.
//

#include <iostream>
using namespace std;

int main(){
    string str;
    
    while(getline(cin,str)){
        int small = 0;
        int big = 0;
        int num = 0;
        int space = 0;
        
        for(int i=0;str[i]!=0;i++){
            if(str[i]>='a'&&str[i]<='z') small++;
            else if(str[i]>='A'&&str[i]<='Z') big++;
            else if(str[i]>='0'&&str[i]<='9') num++;
            else if(str[i]==' ')space++;
        }
        
        cout<<small<<" "<<big<<" "<<num<<" "<<space<<" "<<endl;
    }
    return 0;
}
