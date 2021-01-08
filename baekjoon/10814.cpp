//
//  10814.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/08.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int,string> a,pair<int,string> b){
    return a.first < b.first;
}

int main(){
    vector<pair<int, string>> v;
    
    int t;
    cin>>t;
    
    int age;
    string name;
    
    while(t--){
        cin>>age>>name;
        v.push_back(make_pair(age, name));
    }
    
    stable_sort(v.begin(), v.end(), cmp);
    
    for(vector<pair<int, string>>::iterator i = v.begin(); i!=v.end();i++){
        cout<<i->first<<" "<<i->second<<"\n";
    }
    return 0;
}
