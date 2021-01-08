//
//  11651.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/08.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define Max 100000

bool cmp(pair<int,int> a , pair<int,int> b){
    if (a.second == b.second)
        return a.first < b.first;
    else return a.second < b.second;
}

int main(){
    int t;
    cin>>t;
    
    vector<pair<int, int>> v;
    int x,y;
    while(t--){
        cin>>x>>y;
        v.push_back(make_pair(x, y));
    }
    
    sort(v.begin(),v.end(),cmp);
    
    for (vector<pair<int, int>>::iterator i = v.begin(); i != v.end(); i++)
            cout << i->first << " " << i->second << '\n';
    
    return 0;
}

