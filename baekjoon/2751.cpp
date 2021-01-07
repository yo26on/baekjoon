//
//  2751.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/07.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
vector<int> v;
 
int main(int argc, char *argv[])
{
    int n;
    int num;
 
    cin >> n;
 
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);
        v.push_back(num);
    }
 
    sort(v.begin(), v.end());
 
    for (int i = 0; i < v.size(); ++i) {
        printf("%d\n", v[i]);
    }
 
    return 0;
}
