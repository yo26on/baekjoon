//
//  1463.cpp
//  backjoon
//
//  Created by 김윤서 on 2021/01/02.
//

#include <iostream>
#include <algorithm>

using namespace std;
int dp[10000001];

int solution(int n)
{
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1; //1을 뺀 후의 연산횟수 초기 저장
        if (i % 2 == 0)
            dp[i] = min(dp[i / 2] + 1, dp[i]); //2로 나눴을 때와 초기 저장값 비교후 작은 거 저장
        if (i % 3 == 0)
            dp[i] = min(dp[i / 3] + 1, dp[i]); //3로 나눴을 때와 초기 저장값 비교후 작은 거 저장
    }

    return dp[n];//최종적으로 저장되는 값 반환

}
int main()
{
    dp[1] = 0;
    int n;
    cin >> n;

    cout << solution(n);
}
