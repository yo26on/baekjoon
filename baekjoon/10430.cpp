//
//  10430.cpp
//  baekjoon
//
//  Created by 김윤서 on 2021/01/12.
//

#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d \n", (A + B) % C);
    printf("%d \n", (A%C + B % C) % C);
    printf("%d \n", (A*B) % C);
    printf("%d \n", (A%C * B%C) % C);
    
    return 0;
}
