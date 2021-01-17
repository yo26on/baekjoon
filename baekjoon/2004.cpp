//
//  2004.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/17.
//

#include <iostream>
using namespace std;

long long int CountTwo(long long int n)
{
    long long int t = 0;
    for (long long int i = 2; i <= n; i *= 2)
        t += n/ i;
    
    return t;
}

long long int CountFive(long long int n)
{
    long long int f = 0;
    for (long long int i = 5; i <= n; i *= 5)
        f += n/ i;
    return f;
}
 
 
int main()
{
    long long int n, m;
    cin>>n>>m;
 
    long long int two = CountTwo(n)-CountTwo(m)-CountTwo(n-m);
    long long int five = CountFive(n)-CountFive(m)-CountFive(n-m);
    cout<<min(two,five)<<endl;
 
    return 0;
}



