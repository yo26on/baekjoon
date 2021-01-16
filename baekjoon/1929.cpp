//
//  1929.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/17.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int m, n;
    cin >> m >> n;
    vector<bool> isPrime(n + 1, true);
    
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i <= n; i++) {
        if(isPrime[i]){
            for (int j = 2*i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
 
    for(int i = m; i <= n; i++)
        if(isPrime[i])
            cout << i << '\n';
 
   
    return 0;
}
