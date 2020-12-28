//
//  main.cpp
//  backjoon
//
//  Created by 김윤서 on 2020/12/28.
//

#include <iostream>
using namespace std;

class sumNum{
    int num1;
    int num2;
    
public:
    sumNum(){
        num1=0;
        num2=0;
    };
    void input(){
        cin>>num1;
        cin>>num2;
    }
    
    void output(){
        cout<< num1+num2 <<endl;
    }
};

int main() {
    int t = 0;
    cin>>t;
    
    sumNum* ptr = new sumNum[t];
    
    for(int i=0;i<t;i++){
        (ptr+i)->input();
    }
    
    for(int i=0;i<t;i++){
        (ptr+i)->output();
    }
    
    delete[] ptr;
    return 0;
}
