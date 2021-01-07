#include <iostream>
#include <cstdio>
 
using namespace std;
 
const int MAXN = 100000;
 
int buf[2][MAXN + 1] = { 0, };
int dp[2][MAXN + 1] = { 0, };
 
int max(int a, int b) { if (a > b) return a; return b; }
 
int bottomUp(int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &buf[0][i]);
 
    for (int i = 0; i < n; i++)
        scanf("%d", &buf[1][i]);
 
    dp[0][0] = buf[0][0];
    dp[1][0] = buf[1][0];
    dp[0][1] = buf[0][1] + dp[1][0];
    dp[1][1] = buf[1][1] + dp[0][0];
 
    for (int i = 2; i < n; i++) {
        dp[0][i] = buf[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
        dp[1][i] = buf[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
    }
 
    return max(dp[0][n - 1], dp[1][n - 1]);
}
 
int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%d\n", bottomUp(n));
    }
    return 0;
}
