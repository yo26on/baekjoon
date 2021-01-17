//
//  6588.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/17.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<bool> isPrime(1000000+1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i <= 1000000+1; i++) {
        if(isPrime[i]){
            for (int j = 2*i; j <= 1000000+1; j += i)
                isPrime[j] = false;
        }
    }
    
    while(1){
        int n;
        cin>>n;
        if(n==0) break;

        bool isP = false;
        for(int i=3; i<=n/2;i++){
            if(isPrime[i]&&isPrime[n-i]){
                cout<< n<<" = "<<i<<" + "<<n-i<<"\n";
                isP=true;
                break;
            }
        }
        
        if(!isP) cout<<"Goldbach's conjecture is wrong.\n";

    }
    return 0;
}
