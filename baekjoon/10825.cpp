//
//  10825.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/08.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Lecture{
    string name;
    int kor;
    int eng;
    int math;
};

bool cmp(Lecture a, Lecture b){
    if(a.kor<b.kor) return false;
    else if(a.kor==b.kor) {
        if(a.eng>b.eng) return false;
        else if(a.eng==b.eng){
            if(a.math<b.math) return false;
            else if(a.math == b.math){
                if(a.name>b.name) return false;
            }
        }
    }
    return true;
}

int main(){
    vector<Lecture> v;

    int t;
    cin>>t;
    
    while(t--){
        Lecture l;
        cin>>l.name>>l.kor>>l.eng>>l.math;
        v.push_back(l);
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for(vector<Lecture>::iterator i = v.begin() ; i!=v.end();i++){
        cout<<i->name<<"\n";
    }
    return 0;
}
