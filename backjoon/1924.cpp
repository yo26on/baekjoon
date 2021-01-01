//
//  1924.cpp
//  backjoon
//
//  Created by 김윤서 on 2020/12/31.
//

#include <iostream>
using namespace std;

int main(){
    int month;
    int day;
    cin>>month;
    cin>>day;
    
    for(int i = 1; i<month ; i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            day+=31;
        else if(i==2)
            day+=28;
        else day+=30;
    }
    
    string week[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    
    cout<<week[day%7];
    return 0;
}
