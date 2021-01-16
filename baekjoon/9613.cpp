//
//  9613.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/15.
//

#include <iostream>
#include <vector>
using namespace std;

int gcd(int a,int b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a%b);
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int> v;
        for(int i=0; i<n;i++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        
        long sum = 0;
        for(int i = 0 ; i<n ; i++){
            for(int k = i+1 ; k<n ; k++){
                sum+=gcd(v[i],v[k]);
            }
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}
