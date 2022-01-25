#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
#define MAX 201

void solve()
{
    int N, K;
    cin >> N >> K;
    long long dp[MAX][MAX];

    for (int i = 1; i <= N; i++)
    {
        dp[i][1] = i;
        dp[1][i] = 1;
    }

    for (int i = 2; i <= N; i++)
    {
        for (int j = 2; j <= K; j++)
        {
            dp[j][i] = (dp[j - 1][i] + dp[j][i - 1]) % 1000000000;
        }
    }

    cout << dp[K][N];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}
