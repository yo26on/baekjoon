//
//  1676.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/17.
//

#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    
    int count2=0,count5=0;
    while(n){
        if(n%2==0)count2++;
        if(n%5==0)count5++;
        if(n%25==0)count5++;
        if(n%125==0) count5++;
        n--;
    }
    
    cout<<min(count2,count5)<<endl;
    return 0;
}
